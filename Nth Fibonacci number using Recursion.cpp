#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int a,int b,int cnt,int n){
    int c = a+b;
    if (cnt==n+1){
        return c;
    }
    a = b;
    b = c;
    cnt++;
    Fibonacci(a,b,cnt,n);
}
int main() {
    //Nth Fibonacci number using Recursion
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int cnt = 3;
    //cout << a << " " << b << " ";
    cout << Fibonacci(a,b,cnt,n);
    return 0;
}
