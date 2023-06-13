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

void insertAtTail(Node* &tail, int d){
	//create obj
	Node* newTail = new Node(d);
	//STEP -1 (tail->next point it to new node)
	tail->next = newTail;
	//STEP -2 (Update newNode with head)
	tail = newTail;
	
}


void insertAtAny(Node* &head, int pos,int d){
	if(pos==1){
		insertAtHead(head,d);
	}
	else{
		// create a new node
		Node* newNode = new Node(d);
		
		// reach to the positon where updation is to be done
		Node* prev = head;
		int t=pos-2;
		while(t--){
			prev = prev->next;
		}
		
		// make change in the connection and update
		newNode->next = prev->next;
		prev->next = newNode;
	}
	
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
	cout<<endl;
	insertAtAny(head,3,114);
	
	traverse(head);
	return 0;
}
