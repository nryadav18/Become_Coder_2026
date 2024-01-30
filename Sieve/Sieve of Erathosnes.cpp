#include <bits/stdc++.h>
using namespace std;
int main() {
    //Sieve of Erathosnes
    //T.C - O(n*log(log(n))
	int n;
	cin>>n;
	vector<bool>primeVector(n+1,true);
	for (int i = 2 ; i <= sqrt(n) ; i++){
	    if (primeVector[i]){
	        for (int j = i*2 ; j <= n ; j = j+i){
	            primeVector[j] = false;
	        }
	    }
	}
	for (int i = 2 ; i <= n ; i++){
	    if (primeVector[i]){
	        cout << i << " ";
	    }
	}
	return 0;
}
