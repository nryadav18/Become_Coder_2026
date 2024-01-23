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

bool isLoopDetected(LL* head){
    if (head==NULL or head->next==NULL){
        return false;
    }
    LL* raj = head; //Slow Pointer
    LL* jyo = head->next->next; //Fast Pointer
    while (1){
        if (raj==NULL or raj->next==NULL or jyo==NULL or jyo->next==NULL){
            return false;
        }
        else if (raj->next == jyo->next){
            return true;
        }
        raj = raj->next;
        jyo = jyo->next->next;
    }
    return false;
}

int main (){
    int n;
    cin>>n;
    LL* Head;
    LL* it;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if (i==0){
            Head = new LL(x);
            it = Head;
        }
        else{
            LL* Node = new LL(x);
            it->next = Node;
            it = it->next;
        }
    }
    cout << isLoopDetected(Head);
    return 0;
}
