#include <bits/stdc++.h>
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
int main() {
    //Basic Creation & Implementation of Linked List
	LL* Node1 = new LL(10);
	LL* Node2 = new LL(20);
	LL* Node3 = new LL(30);
	Node1->next = Node2;
	Node2->next = Node3;
	LL* jk = Node1;
	while (jk!=NULL){
	    cout << jk->data << " ";
	    jk = jk->next;
	}
	return 0;
}
