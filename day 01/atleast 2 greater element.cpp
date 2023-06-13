#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void selectionSort(int arr[],int size){
	for(int i=0;i<size;i++){
		int min_idx=i;
		for(int j=0;j<size;j++){
			if(arr[j]>arr[min_idx])
				min_idx=j;
			swap(arr[i],arr[min_idx]);
		}
	}
}

void prinArrayAleast2max(int arr[], int size){
	for(int i=0;i<size-2;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int arr[]={7,56,2,3,789,4,58,12,45,14,1};
	int size = sizeof(arr)/sizeof(int);
	selectionSort(arr,size);
	printArray(arr,size);
	prinArrayAleast2max(arr,size);
}
