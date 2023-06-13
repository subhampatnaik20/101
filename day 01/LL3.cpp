#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int d){
			this->data = d;
			this->next = NULL;
		}
};

void insertAtTail(Node* &tail, int d){
	//create obj
	Node* newTail = new Node(d);
	//STEP -1 (tail->next point it to new node)
	tail->next = newTail;
	//STEP -2 (Update newNode with head)
	tail = newTail;
	
}

void traverse(Node* &head){
	//create new obj and make it equal to head
	Node* temp = head;
	//print the temp->data until temp becomes NULL
	while(temp!=NULL){
		//printing temp data
		cout<<temp->data<<" ";
		//updating temp to the next node
		temp = temp->next;
	}
}

int main(){
//	Node* head = new Node(3);
	Node* tail = new Node(3);
	Node* head = tail;
	insertAtTail(tail,5);
	insertAtTail(tail,8);
	insertAtTail(tail,7);
	insertAtTail(tail,9);
	insertAtTail(tail,10);	
	traverse(head);
	return 0;
}
