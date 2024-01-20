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
    //Dynamically Creation of Linked List
	int n;
	cin>>n;
	LL *Head;
	LL *temp;
	for (int i=0;i<n;i++){
	    int val;
	    cin>>val;
	    if (i==0){
	        Head = new LL(val);
	        temp = Head;
	    }
	    else{
	        LL* Node = new LL(val);
	        temp->next = Node;
	        temp = temp->next;
	    }
	}
	LL* t = Head;
	while (t!=NULL){
	    cout <<t->data << " ";
	    t = t->next;
	}
	return 0;
}
