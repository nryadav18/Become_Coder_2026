#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    //Implementing Stack in C++
    /* Stack is a Linear DS or 
       The Idea of Implementing a vector
       or Array with the Principle of 
       Last In First Out (LIFO);  */
    int t;
    cin>>t;
    stack<int>st;
    while(t--) {
        char ch;
        cin>>ch;
        if (ch=='x'){
            int val;
            cin>>val;
            st.push(val);
        }
        else if (ch=='y'){
            if (st.empty()){
                cout << "Stack is Empty, So You cannot Pop\n";
                continue;
            }
            else{
                st.pop();
            }
        }
        else{
            break;
        }
    }
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
