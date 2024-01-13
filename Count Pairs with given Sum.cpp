#include<bits/stdc++.h>
using namespace std;
/* Counting Pairs with Given Sum */
int count(int arr[],int n,int k){
    unordered_map<int,int>mp;
    for (int i = 0 ;i <n;i++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for (int i = 0 ; i < n ; i++){
        int diff = k - arr[i];
        if (diff==arr[i]){
            //cout << arr[i] << " " << diff << endl;
            int t = mp[diff];
            cnt += (t*(t-1))/2;
            mp[arr[i]] = 0;
            
        }
        else if (mp[diff]>0){
            //cout << arr[i] << " " << diff << endl;
            cnt += (mp[arr[i]]*mp[diff]);
            mp[arr[i]] = 0;
            mp[diff] = 0;
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
    cout << count(arr,n,k);
    return 0;
    //T.C = O(n)
    //S.C = O(n)
}
