#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n,vector<int>&dp){
    if (n==0) return 0;
    if (n==1) return 1;
    if (dp[n-1] == -1){
        int x = Fibonacci(n-1,dp);
        dp[n-1] = x;
    }
    if (dp[n-2] == -1){
        int x = Fibonacci(n-2,dp);
        dp[n-2] = x;
    }
    dp[n] = dp[n-1]+dp[n-2];
    return dp[n];
}
int main() {
    //Fibonacci number Generation using DP
    //Recursive Tree will be generated...!
    //Checks whether the value is there in your 1D dp or not !
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout << Fibonacci(n,dp);
    return 0;
}
