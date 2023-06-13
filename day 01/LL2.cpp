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

void insertAtHead(Node* &head, int d){
	//create obj
	Node* newHead = new Node(d);
	//STEP -1 (Make newNode next to point head)
	newHead->next = head;
	//STEP -2 (Update newNode with head)
	head = newHead;
	
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
	Node* head = new Node(3);
	insertAtHead(head,5);
	insertAtHead(head,8);
	insertAtHead(head,7);
	insertAtHead(head,9);
	insertAtHead(head,10);	
	traverse(head);
	return 0;
}
