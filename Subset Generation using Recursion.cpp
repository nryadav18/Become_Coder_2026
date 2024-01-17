#include <bits/stdc++.h>
using namespace std;
void Subsets(vector<int>v,int ind,vector<int>ans,int n){
    if (ind == n){
        for (auto it:ans){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(v[ind]);
    Subsets(v,ind+1,ans,n);
    ans.pop_back();
    Subsets(v,ind+1,ans,n);
}
int main() {
    //Generation of Subsets for a given Array (Set)
    //using Recursion --> (2^n)
	int n;
	cin>>n;
	vector<int>v;
	for (int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	Subsets(v,0,{},n);
 	return 0;
 	//T.C - O(2^n)
 	//S.C - O(2^n)
}
