#include <bits/stdc++.h>
using namespace std;
class Linked_List {
    public:
    int data;
    Linked_List* next;
    Linked_List(int value){
        this->data = value;
        this->next = NULL;
    }
};
int main() {
    //Insertion of data at specific position
	Linked_List* Node1 = new Linked_List(10);
	Linked_List* Node2 = new Linked_List(30);
	Linked_List* Node3 = new Linked_List(50);
	Node1->next = Node2;
	Node2->next = Node3;
	Linked_List* it = Node1;
	int pos = 2;
	while (pos!=2){
	    it = it->next;
	    pos--;
	}
	Linked_List* NewNode = new Linked_List(20);
	NewNode->next = it->next;
	it->next = NewNode;
	Linked_List* iterator = Node1;
	while (iterator!=NULL){
	    cout << iterator->data << " ";
	    iterator = iterator->next;
	}
	
	return 0;
}
