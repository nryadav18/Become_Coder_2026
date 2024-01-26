#include<bits/stdc++.h>
using namespace std;
class DLL{
    public:
    int data;
    DLL* prev;
    DLL* next;
    DLL(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
int main (){
    //Dynamic Creation & Implementation of 
    //Doubly Linked List (DLL)
    int n;
    cin>>n;
    DLL* head;
    DLL* it;
    DLL* pre = NULL;
    for (int i=0;i<n;i++){
        int val;
        cin>>val;
        if (i==0){
            head = new DLL(val);
            it = head;
        }
        else{
            DLL* node = new DLL(val);
            it->next = node;
            node->prev = it;
            pre = it;
            it = it->next;
        }
    }
    while (it!=NULL){
        cout << it->data << " ";
        it = it->prev;
    }
    return 0;
}
