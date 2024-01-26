#include <bits/stdc++.h>
using namespace std;
int main() {
    //Generation of Subsets for a given Array (Set)
	int n;
	cin>>n;
	vector<int>v;
	for (int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	int size = n;
	int sq = 1<<n; // calculates the value of n square
	int ind , t;
	vector<vector<int>>res;
	for (int i = 0 ; i < sq ;i++){
	   //cout << i << " ";
	   ind = size - 1;
	   t = i;
	   vector<int>vec;
	   while (t){
	        //cout << ind << " ";
	        if (t&1){
	            vec.push_back(v[ind]);
	        }
	        t >>= 1;
	        ind--;
	    }
	    //cout << endl;
	    res.push_back(vec);
	}
	for (auto it:res){
	    for (auto ls:it){
	        cout << ls << " ";
	    }
	    cout << endl;
	}
 	return 0;
}
