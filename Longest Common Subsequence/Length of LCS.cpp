#include<bits/stdc++.h>
using namespace std;
//Length of Longest Common Subsequence of 2 Strings 
int lcs(string a, string b, string c, int d, int e, int f){
    vector<vector<int>>dp1(e+1,vector<int>(d+1));
    for (int i=1;i<=e;i++){
        for (int j=1;j<=d;j++){
            if (a[i-1] == b[j-1]){
                dp1[i][j] = 1 + dp1[i-1][j-1];
            }
            else{
                if (dp1[i-1][j] > dp1[i][j-1]){
                    dp1[i][j] = dp1[i-1][j];
                }
                else{
                    dp1[i][j] = dp1[i][j-1];
                }
            }
        }
    }
    return dp1[e][d];
}
int main (){
    //nry_code();
    string a,b,c;
    cin>>a>>b>>c;
    int d = a.length();
    int e = b.length();
    int f = c.length();
    cout << lcs(a,b,c,d,e,f);
    return 0;
}
