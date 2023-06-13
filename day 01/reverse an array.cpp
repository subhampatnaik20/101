#include <iostream>
using namespace std;

int printArray(int arr[],int size){
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
}

int reverseArray(int arr[] ,  int end){
//	while(start<end){
////		swap(arr[start] , arr[end]);
////		int temp = arr[start];
////		arr[start] = arr[end];
////		arr[end] = temp;
////		start++;
////		end--;
//	}
	
	for(int start = 0 ; start < end ; start++ , end--){
		swap(arr[start] , arr[end]);
	}
}

int main(){
	int arr[]={9,8,7,6,5,4,3,2,1};
	int size = sizeof(arr)/sizeof(int);
	cout<<"Before : "<< endl;
	printArray(arr,size);
	reverseArray(arr,size-1);
	cout<< endl << "After : " << endl;
	printArray(arr,size);
}
