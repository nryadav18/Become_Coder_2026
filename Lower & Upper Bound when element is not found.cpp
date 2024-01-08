#include<bits/stdc++.h>
using namespace std;
int main() {
    /*Lower Bound and Upper of an Element
      when it is not present in the array*/
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    int *low = lower_bound(arr,arr+n,t);
    int l = low - arr; 
    /* 
       Lower bound returns the 1st Highest value 
       than that of your Target i.e,The 1st element 
       which is the Greater than your Target and 
       less than that of remaining 
                                            */
    int *upp = upper_bound(arr,arr+n,t);
    int u = upp - arr - 1;
    /* 
       Upper bound returns the 1st Highest value 
       than that of your Target i.e,The 1st element 
       which is the Lesser than your Target and 
       greater than that of remaining 
                                            */
    cout <<  l << " " << u << endl;
    /* If you observe the LOWER BOUND will be 
       GREATER THAN the UPPER BOUND */
    return 0;
}
