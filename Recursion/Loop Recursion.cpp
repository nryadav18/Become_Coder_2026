#include <bits/stdc++.h>
using namespace std;
void recFun(string &s,int i,int j){
    if (i >= j){
        cout << s << endl;
        return ;
    }
    for (int k = i ; k <= j ; k++){
        swap(s[i],s[k]);
        recFun(s,i+1,j);
        swap(s[i],s[k]);
    }
}
int main() {
    //Loop Recursion
    string s;
    cin>>s;
    recFun(s,0,s.length()-1);
}
