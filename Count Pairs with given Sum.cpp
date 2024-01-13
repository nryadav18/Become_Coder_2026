#include<bits/stdc++.h>
using namespace std;
/* Counting Pairs with Given Sum */
int count(int arr[],int n,int k){
    int cnt = 0;
    int i = 0;
    int j = n-1;
    while (i<j){
        int sum = arr[i]+arr[j];
        if (sum==k) cnt++;
        if (sum<=k){
            i++;
        }
        else{
            j--;
        }
    }
    return cnt;
}
int main (){
    //nry_code();
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if (n==1){
        cout << -1 << endl;
        return 0;
    }
    sort(arr,arr+n);
    cout << count(arr,n,k);
    return 0;
    //T.C = O(n*log(n))
    //S.C = O(1)
}
