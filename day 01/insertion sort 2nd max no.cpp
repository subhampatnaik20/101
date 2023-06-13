#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
	for(int i=1;i<size;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}arr[j+1]=temp;
	}
}

void printArray(int arr[], int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;	
}

int main(){
	int arr[]={8,65,95,1,3,7,44,556,12};
	int size = sizeof(arr)/sizeof(int);
	printArray(arr,size);
	insertionSort(arr,size);
	printArray(arr,size);
	cout<<"Second largest number is: "<<arr[size-2];
}
