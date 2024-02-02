#include<bits/stdc++.h>
using namespace std;
int funCall(int n){
    if (n==1) return 0;
    if (n==2) return 1; 
    return funCall(n-1)+funCall(n-2);
}
int main (){
    int n;
    cin>>n;
    cout << funCall(n);
    return 0;
}
