#include <bits/stdc++.h>
using namespace std;
void Subsets(vector<int>v,int ind,vector<int>ans,int n,vector<vector<int>>&dp){
    if (ind == n){
        dp.push_back(ans);
        return;
    }
    ans.push_back(v[ind]);
    Subsets(v,ind+1,ans,n,dp);
    ans.pop_back();
    Subsets(v,ind+1,ans,n,dp);
}
int main() {
    //Generation of Subsets for a given Array (Set)
    //using Recursion and DP to store --> (2^n)
	int n;
	cin>>n;
	vector<int>v;
	for (int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	vector<vector<int>>dp;
	Subsets(v,0,{},n,dp);
	for (auto it:dp){
	    for (auto ls:it){
	        cout << ls << " ";
	    }
	    cout << endl;
	}
	//cout << endl;
 	return 0;
 	//T.C - O(2^n)
 	//S.C - O(2^n)
}
