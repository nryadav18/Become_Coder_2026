#include<bits/stdc++.h>
using namespace std;
// Evaluation of equation using Stack without Braces
/* The Operator Stack should be 
   Strictly Monotonially Increasing */
/* Infix Expression */
int priority(char ch){
    if (ch == '+' or ch=='-'){
        return 1;
    }
    else{
        return 2;
    }
}
int evaluate(int a,int b,char ch){
    if (ch=='+'){
        return a+b;
    }
    else if (ch=='-'){
        return a-b;
    }
    else if (ch=='*'){
        return a*b;
    }
    else if (ch=='/'){
        return int(a/b);
    }
}
int main (){
    string s;
    cin>>s;
    int n = s.length();
    stack<char>math;
    stack<int>nums;
    for(int i=0;i<n;i++){
        if (s[i]==' '){
            continue;
        }
        else if (s[i] >='0' and s[i] <='9'){
            int val = 0;
            while (s[i] >= '0' and s[i] <= '9'){
                val = val * 10 + (s[i] - '0');
                i++;
            }
            nums.push(val);
            i--;
        }
        else{
            if (math.empty()){
                math.push(s[i]);
            }
            else{
                while ((priority(s[i]) <= priority(math.top()))){
                    int v1 = nums.top();
                    nums.pop();
                    int v2 = nums.top();
                    nums.pop();
                    char v3 = math.top();
                    math.pop();
                    int val = evaluate(v2,v1,v3);
                    nums.push(val);
                    if (math.empty()){
                        break;
                    }
                }
                math.push(s[i]);
            }
        }
    }
    while (!math.empty()) {
        int m = nums.top(); 
        nums.pop();
        int n = nums.top(); 
        nums.pop();
        char ch = math.top(); 
        math.pop();
        nums.push(evaluate(m,n,ch));
    }
    cout << nums.top() << endl;
    return 0;
}
