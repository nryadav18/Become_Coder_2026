#include <bits/stdc++.h>
using namespace std;
int main() {
    //Sliding Window of Variable sized length
    //Indexes of SubArray with given Sum
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int tar;
	cin>>tar;
	int sum = 0;
	int i=0;
	int j=0;
	while (j<n){
	    sum += arr[j];
	    if (sum == tar){
	        cout << i << " " << j << endl;
	        j++;
	    }
	    else if (sum < tar){
	        j++;
	    }
	    else{
	        while (sum >= tar){
	            if (sum == tar){
	                cout << i << " " << j << endl;
	                break;
	            }
	            sum -= arr[i];
	            i++;
	        }
	        j++;
	    }
	}
	return 0;
}
