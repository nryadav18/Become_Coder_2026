#include <bits/stdc++.h>
using namespace std;
int main() {
    //Segmented Sieve (Primes for a Range of Numbers)
    //Generating Primes in given Range 
    //T.C 
	int a,b;
	cin>>a>>b;
	vector<bool>v1(sqrt(b+1),true);
	vector<bool>v2(b-a+1,true);
	for (int i = 2 ; i <= sqrt(b) ; i++){
	    if (v1[i]){
	        for (int j = i*i ; j <= sqrt(b) ; j = j+i){
	            v1[j] = false;
	        }
	    }
	}
	for (int i = 2 ; i <= sqrt(b) ; i++){
	    if (v1[i]){
	        int val = ((a/i)+(a%i))*i;
	        int ind = val-a;
	        for (int j = ind ; j <= b - a ; j = j + i){
	            v2[j] = false;
	        }
	    }
	}
	for (int i = 0 ; i <= b - a ; i++){
	    if (v2[i]){
	        cout << i+a << " ";
	    }
	}
	return 0;
}
