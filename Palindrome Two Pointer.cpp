#include<bits/stdc++.h>
using namespace std;
/*Checking whether a string is 
  Palindrome or not using 
  Two Pointer with Half Time */
bool ispal(string s,int n){
    int i=0;
    int j=n-1;
    while (i<j){
        if (s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
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
