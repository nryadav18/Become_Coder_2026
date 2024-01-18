#include <bits/stdc++.h>
using namespace std;
void Fibonacci(int a,int b,int cnt,int n){
    if (cnt==n+1){
        return;
    }
    int c = a+b;
    cout << c << " ";
    a = b;
    b = c;
    cnt++;
    Fibonacci(a,b,cnt,n);
}
int main() {
    //Fibonacci number Generation using Recursion
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int cnt = 3;
    cout << a << " " << b << " ";
    Fibonacci(a,b,cnt,n);
    return 0;
}
