#include<bits/stdc++.h>
using namespace std;
void funCall(int n,int m1,int m2){
    if (m1 > m2){
        return;
    }
    cout << n << " x " << m1 << " = " << n*m1 << endl;
    funCall(n,m1+1,m2);
}
int main (){
    int n;
    cin>>n;
    int m;
    cin>>m;
    funCall(n,1,m);
    return 0;
}
