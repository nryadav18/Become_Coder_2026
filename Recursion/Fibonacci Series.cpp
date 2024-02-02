#include<bits/stdc++.h>
using namespace std;
void funCall(int a,int b,int n){
    if (n==2) return;
    int c = a+b;
    cout << c << " ";
    a = b;
    b = c;
    funCall(a,b,n-1);
}
int main (){
    int n;
    cin>>n;
    if (n==1){
        cout << 0 << endl;
    }
    else{
        cout << 0 << " " << 1 << " ";
        if (n!=2){
            funCall(0,1,n);
        }
    }
    return 0;
}
