#include<bits/stdc++.h>
using namespace std;
// Evaluation of equation using Stack
/* The Operator Stack should be 
   Strictly Monotonially Increasing */
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
    else{
        return 0;
    }
}
int main (){
    string s;
    cin>>s;
    stack<char>math;
    stack<int>nums;
    int val = 0;
    for(auto i:s){
        if (isdigit(i)){
            nums.push(i-'0');
        }
        else if (math.empty()){
            math.push(i);
        }
        else{
            while (!math.empty() and math.top()!='(' and (i=='*' or (i=='+' or i=='-') and (math.top()=='+' or math.top()=='-'))){
                int v1 = nums.top();
                nums.pop();
                int v2 = nums.top();
                nums.pop();
                char v3 = math.top();
                math.pop();
                val = evaluate(v1,v2,v3);
                nums.push(val);
            }
            math.push(i);
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
