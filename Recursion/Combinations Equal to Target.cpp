#include<bits/stdc++.h>
using namespace std;
void recFun(vector<int>v,int i,vector<int>res,int n,int t,int s){
    if (i>=n and s!=t){
        return;
    }
    else if (s==t){
        for (auto it : res){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    else if (s>t){
        return ;
    }
    res.push_back(v[i]);
    recFun(v,i+1,res,n,t,s+v[i]);
    res.pop_back();
    recFun(v,i+1,res,n,t,s);
}
int main() {
    //Generating All the Combinations
    //Whose Sum is equal to Target
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i=0;i<n;i++){
	    cin>>v[i];
	}
	int t;
	cin>>t;
	sort(v.begin(),v.end());
	vector<int>res;
	recFun(v,0,res,n,t,0);
}
