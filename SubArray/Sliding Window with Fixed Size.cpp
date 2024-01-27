#include <bits/stdc++.h>
using namespace std;
int main() {
    //Generation of SubArray with given size
    //Static Size and Dynamic Sum/Product
    //Sliding Window Algorithm
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int k;
	cin>>k;
	vector<int>v;
	for (int i=0;i<k;i++){
	    v.push_back(arr[i]);
	}
	for (auto it:v){
	    cout << it << " ";
	}
	cout << endl;
	for (int j=0;j<n-k;j++){
	    v.push_back(arr[j+k]);
	    v.erase(v.begin());
	    for (auto it:v){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}
