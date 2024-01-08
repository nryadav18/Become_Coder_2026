#include<bits/stdc++.h>
using namespace std;
//Set Bit Count of a Number...
int set_bits(int n){
    int cnt = 0;
    while (n){
        if (n&1){
            cnt++;
        }
        n>>=1;
    }
    return cnt;
}
int main (){
    //nry_code();
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout << set_bits(n) << endl;
    }
    return 0;
}
