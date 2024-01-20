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
int main (){
    //Insertion at Tail of Linked List
    LL* Node1 = new LL (10);
    LL* Node2 = new LL (20);
    LL* Node3 = new LL (30);
    Node1->next = Node2;
    Node2->next = Node3;
    LL* it = Node1;
    while (it->next!=NULL){
        it = it->next;
    }
    LL* newNode = new LL (40);
    it->next = newNode;
    LL* iterator = Node1;
    while (iterator!=NULL){
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    return 0;
}
