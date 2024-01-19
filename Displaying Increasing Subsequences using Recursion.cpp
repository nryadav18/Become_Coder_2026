#include <bits/stdc++.h>
using namespace std;
void Recursive_Fun(vector<int>v,int ind,int size,vector<int>res){
    if (ind >= size){
        for (auto it : res){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    if (res.size() == 0 or res.back() < v[ind]){
        res.push_back(v[ind]);
        Recursive_Fun(v,ind+1,size,res);//Pick call
        res.pop_back();
    }
    Recursive_Fun(v,ind+1,size,res); //Unpick call 
}
int main() {
    //Printing Increasing Subsequences using Recursion
    //We reduced the Waste Function calls with flag variable
	int n;
	cin>>n;
	vector<int>v(n,0);
	for (int i=0;i<n;i++){
	    cin>>v[i];
	}
	Recursive_Fun(v,0,n,{});
	return 0;
}
