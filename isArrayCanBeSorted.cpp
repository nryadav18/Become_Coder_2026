#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>v){
    int n = v.size();
    for (int i=0;i<n-1;i++){
        if (v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}
bool sameSetBits(int a,int b){
    int cnt1 = 0, cnt2 = 0;
    while (a){
        if (a&1){
            cnt1++;
        }
        a >>= 1;
    }
    while (b){
        if (b&1){
            cnt2++;
        }
        b >>= 1;
    }
    if (cnt1==cnt2){
        return true;
    }
    return false;
}
int main() {
    //LeetCode Biweekly Contest - 20th Jan 2024;
    //Is Array can be Sorted
    //Swapping of Same Set Bit Count Elements
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i=0;i<n;i++){
	    cin>>v[i];
	}
	while (1){
	    int swap_count = 0;
	    for (int i=0;i<n-1;i++){
    	    int j = i+1;
    	    if (v[i] > v[j] and sameSetBits(v[i],v[j])){
    	        swap(v[i],v[j]);
    	        cout << v[i] << " " << v[j] << endl;
    	        swap_count++;
    	    }
    	}
    	cout << swap_count << endl;
        if (swap_count == 0 and (!isSorted(v))){
            cout << "False" << endl;
            return 0;
        }
        if (isSorted(v)){
            cout << "True" << endl;
            return 0;
        }
	}
	cout << "False" << endl;
	return 0;
}
