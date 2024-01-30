#include<bits/stdc++.h>
using namespace std;

//Longest Common Subsequence of 2 Strings 
//Generating One of the LCS of 2 Strings

string lcs(string a, string b, string c, int d, int e, int f){
    vector<vector<int>>dp1(e+1,vector<int>(d+1));
    vector<vector<int>>arrows(e+1,vector<int>(d+1));
    for (int i=1;i<=e;i++){
        for (int j=1;j<=d;j++){
            if (a[i-1] == b[j-1]){
                dp1[i][j] = 1 + dp1[i-1][j-1];
                arrows[i][j] = 1;
            }
            else{
                if (dp1[i-1][j] > dp1[i][j-1]){
                    dp1[i][j] = dp1[i-1][j];
                    arrows[i][j] = 2;
                }
                else{
                    dp1[i][j] = dp1[i][j-1];
                    arrows[i][j] = -2;
                }
            }
        }
    }
    int i = e;
    int j = d;
    string res;
    while (i != 0 and j != 0){
        if (arrows[i][j]==2){
            i--;
        }
        else if (arrows[i][j]==-2){
            j--;
        }
        else{
            res += a[i-1];
            i--;
            j--;
        }
    }
    reverse(res.begin(),res.end());
    return res;
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
