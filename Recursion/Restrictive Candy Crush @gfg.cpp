#include<bits/stdc++.h>
using namespace std;

bool check(string s,int k){
    bool flag = false;
    int i = 0;
    int j = 1;
    int n = s.length();
    while (j<=n){
        while (s[i] == s[j]){
            if (j-i+1==k){
                return false;
            }
            j++;
        }
        i++;
        j = i+1;
    }
    return true;
}

string gfgFun(string s,int k){
    if (k==1){
        return "";
    }
    int i = 0;
    int j = 1;
    int n = s.length();
    string newString;
    while (j<=n){
        bool flag = false;
        while (s[i] == s[j]){
            if (j-i+1==k){
                flag = true;
                break;
            }
            j++;
        }
        if (flag){
            i = j+1;
            j = i+1;
        }
        else{
            newString += s[i];
            i++;
            j = i+1;
        }
    }
    if (check(newString,k)){
        return newString;
    }
    else{
         return gfgFun(newString,k);
    }
}

int main (){
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout << gfgFun(s,k);
    return 0;
}
