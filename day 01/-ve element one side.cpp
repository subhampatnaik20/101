#include <iostream>
using namespace std;

int printArray(int arr[] , int size){
	for(int i =0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
}

int negativeOneSide(int arr[] , int size){
	int start = 0;
	for(int i = 0 ; i <= size ; i++ ){
		if(arr[i]<0){
			swap(arr[start],arr[i]);
			start++;
		}
	}
}

int main(){
	int arr[10];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
//	int size = sizeof(arr)/sizeof(int);
	
	cout<<"Before: ";
	printArray(arr,n);
	negativeOneSide(arr,n);
	cout<<endl<< "After: ";
	printArray(arr,n);
}
