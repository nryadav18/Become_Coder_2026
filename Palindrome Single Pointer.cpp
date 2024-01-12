#include<bits/stdc++.h>
using namespace std;
/*Checking whether a string is 
  Palindrome or not using 
  Single Pointer using Total 
  Length of String with in Half Time */
bool ispal(string s,int n){
    for (int i=0;i<n/2;i++){
        if (s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}
int main (){
    //nry_code();
    string s;
    cin>>s;
    int n = s.length();
    if (ispal(s,n)) cout << "Palindrome";
    else cout << "Not a Palindrome";
    return 0;
}
