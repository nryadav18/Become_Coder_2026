#include<bits/stdc++.h>
using namespace std;
int funCall(int n){
    if (n == 1){
        return n;
    }
    return n*funCall(n-1);
}
int main (){
    int n;
    cin>>n;
    int val = funCall(n);
    cout << val << endl;
    return 0;
}
