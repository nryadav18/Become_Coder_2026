#include<bits/stdc++.h>
using namespace std;
int main() {
    /*Lower Bound and Upper of an Element
      when array is sorted using Binary Search*/
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    int *low = lower_bound(arr,arr+n,t);
    int l = low - arr; 
    /* 
       Lower bound returns the Index of 
       First Occurence of your Target. 
                                        */
    int *upp = upper_bound(arr,arr+n,t);
    int u = upp - arr - 1;
    /* 
       Upper bound returns the Index of 
       Last Occurence of your Target.
                                        */
    cout <<  l << " " << u << endl;
    return 0;
    
    /* T.c - O(logN)
       S.c - O(1)    */
}
