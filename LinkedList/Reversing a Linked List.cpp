#include<bits/stdc++.h>
using namespace std;
class LL{
    public:
    int data;
    LL* next;
    LL(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    //Reversing a Linked List
    //using Insertion at Head
    int n;
    cin>>n;
    LL* Head;
    LL* it;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if (i==0){
            Head = new LL(x);
            it = Head;
        }
        else{
            LL* Node = new LL(x);
            Node->next = Head;
            Head = Node;
        }
    }
    LL* t = Head;
    while (t!=NULL){
        cout << t->data << " ";
        t = t->next;
    }
    return 0;
}
