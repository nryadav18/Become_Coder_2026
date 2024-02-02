#include<bits/stdc++.h>
using namespace std;
void funCall(int n,int m){
    if (m == 0){
        return;
    }
    funCall(n,m-1);
    cout << n << " x " << m << " = " << n*m << endl;
}
int main (){
    int n;
    cin>>n;
    int m;
    cin>>m;
    funCall(n,m);
    return 0;
}
