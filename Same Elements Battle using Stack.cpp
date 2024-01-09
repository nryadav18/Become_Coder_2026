#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    /* Battle of Same Element using Stack */
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    stack<int>st;
    st.push(v[0]);
    for (int i=1;i<n;i++){
        if (st.empty()){
            st.push(v[i]);
        }
        else if (v[i]==st.top()){
            st.pop();
        }
        else{
            st.push(v[i]);
        }
    }
    cout << st.size();
    return 0;
}
