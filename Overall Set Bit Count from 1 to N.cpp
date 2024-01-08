#include<bits/stdc++.h>
using namespace std;
//Overall Set Bit Count from 1 to N
bool ispower(int n){
    if (n==1){
        return false;
    }
    int cnt = 0;
    while (n){
        if (n&1){
            cnt++;
        }
        n>>=1;
    }
    if (cnt==1) return true;
    return false;
}
int main (){
    //nry_code();
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int temp = n;
        while (!(ispower(n))){
            n--;
        }
        int len = log2(n-1)+1;
        int count = ((n)/2)*len;
        len++;
        n++;
        while (n<=temp){
            int x = n;
            while (x){
                if (x&1){
                    count++;
                }
                x >>= 1;
            }
            n++;
        }
        cout << count << endl;
    }
    return 0;
}
