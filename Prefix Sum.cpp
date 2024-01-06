#include<bits/stdc++.h>
using namespace std;
int main(){
    //Pre_Fix Sum using Map and Constant Space
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    map<int,int>mp;
    int pre_fix[n];
    pre_fix[0] = arr[0];
    int sum = arr[0];
    for (int i=1;i<n;i++){
        sum += arr[i];
        pre_fix[i] = sum;
    }
    for (int i=0;i<n;i++){
        if (pre_fix[i]==t){
            cout << 0 << " " << i << " ";
        }
        else if (pre_fix[i]<t){
            mp[pre_fix[i]] = i;
        }
        else{
            int diff = pre_fix[i] - t;
            if (mp[diff]!=-1){
                cout << mp[diff]+1 << " " << i <<  endl;
            }
            else{
                mp[pre_fix[i]] = i;
            }
        }
    }
    return 0;
}
