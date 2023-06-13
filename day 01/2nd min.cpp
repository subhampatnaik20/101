#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void selectionSort(int arr[], int size){
	for(int i=0;i<size;i++){
		int min_idx = i;
		for(int j=0;j<size;j++){
			if(arr[j]>arr[min_idx])
				min_idx=j;
			swap(arr[i],arr[min_idx]);
		}
	}
}


int main(){
	int arr[]={45,8,66,95,2,3,7,89,562,1};
	int size=sizeof(arr)/sizeof(int);
	selectionSort(arr,size);
	printArray(arr,size);
	cout<<"Second smallest element: "<<arr[1];
}
