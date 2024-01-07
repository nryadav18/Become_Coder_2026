#include<bits/stdc++.h>
using namespace std;
int main() {
    //Sub Array range with given sum;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int>pre_fix(n,0);
    pre_fix[0] = arr[0];
    int sum = arr[0];
    for (int i=1;i<n;i++){
        sum += arr[i];
        pre_fix[i] = sum;
    }
    map<int,vector<int>>mov;
    for (int i=0;i<n;i++){
        if (pre_fix[i] == target){
            cout << 0 << " " << i << endl;
            mov[pre_fix[i]].push_back(i);
        }
        else if (pre_fix[i] < target){
            mov[pre_fix[i]].push_back(i);
        }
        else{
            int diff = pre_fix[i] - target;
            if (mov[diff].size()==0){
                mov[pre_fix[i]].push_back(i);
            }
            else{
                for (auto it:mov[diff]){
                    cout << it+1 << " " << i << endl; 
                }
                mov[pre_fix[i]].push_back(i);
            }
        }
    }
    return 0;
}
