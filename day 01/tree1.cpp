#include <iostream>
#include <queue>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}     
};

Node* builtTree(){
	cout<< " Enter the values of data"<<endl;
	int data;
	cin>> data;
	
	if(data == -1)
		return NULL;
	
	Node* newNode = new Node(data);  
	
	cout<<"Enter the data for left child of: "<<data << endl;
	newNode -> left = builtTree(); 
	
	cout<<"Enter the data for right child of: "<<data << endl;
	newNode -> right = builtTree();
	
	return newNode;
	
}

void preOrder(Node* &root){
	if(root == NULL)
		return;
	cout << root -> data << endl;
	
	preOrder(root -> left);
	preOrder(root -> right);
}


void inOrder(Node* &root){
	if(root == NULL)
		return;
		
	inOrder(root -> left);
	cout << root -> data <<" ";
	inOrder(root -> right);
}

void postOrder(Node* &root){
	if(root == NULL)
		return;
		
	postOrder(root -> left);
	postOrder(root -> right);
	cout << root -> data <<" ";
}

void lvlOrderTraversal(Node* &root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* front = q.front();
		q.pop();
		if(front == NULL){
			cout<< endl;
			if(!q.empty())
				q.push(NULL);
		} else {
			cout<< front->data <<" ";
		
			if(front -> left != NULL)
				q.push(front -> left);
			if(front -> right != NULL)
				q.push(front -> right);
		}
		
		
	}
}

int height(Node* &root){
	if(root == NULL)
		return 0;
	if(root -> left == NULL && root -> right == NULL ) 
		return 0;
	int leftAns = height(root->left);
	int rightAns = height(root->right);
	return 1+max(leftAns , rightAns);
}

int main(){
	Node* root = NULL;
	root = builtTree(); 
	
	cout<<"Prenting preOrder."<<endl;
	preOrder(root);
	cout<<endl<<"Printing inOrder."<<endl;
	inOrder(root);
	cout<<endl<<"Printing postOrder."<<endl;
	postOrder(root);
	cout<<endl<<"Printing lvlOrdertraversal."<<endl;
	lvlOrderTraversal(root);
	cout<<endl<<"height of tree is :"<< height(root)<<endl;
	
}
