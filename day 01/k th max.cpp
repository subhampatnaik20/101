#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0 ;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void bubbleSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		bool swapped = false;
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}if(swapped == false)
			break;
	}
}

int main(){
	int arr[]={55,2,1,78,63,47,2,7,95,9};
	int size = sizeof(arr)/sizeof(int);
	printArray(arr,size);
	int k;
	cout<<"Which max element: ";
	cin>>k;
	bubbleSort(arr,size);
	printArray(arr,size);
	cout<<"the "<<k<<" th "<<"max element is: "<<arr[size-k];
	
}
