#include <iostream>
using namespace std;

//without sorting algo


//int largest_number(int arr[], int size){
//	int largest = INT_MIN;
//	for(int i=0 ; i<=size ; i++){
//		if(arr[i]>largest)
//			largest = arr[i];
//	}
//	return largest;
//}
//int main(){
//	int arr[5]={4,78,6,98,2};
//	cout<<largest_number(arr,5);
//}


//insertion sort

void sorting_array(int arr[] , int size){
	for(int i=0 ; i<size ; i++){
		int min_index=i;
		for(int j=0 ; j<size ; j++){
			if(arr[j]>arr[min_index])
				min_index=j;
			swap(arr[i],arr[min_index]);
		}
	}
}



void print_array(int arr[], int size){
	for(int i=0 ; i<size ;i++)
		cout<<arr[i]<<" ";
}

int main(){
	int arr[5]={4,78,6,98,2};
	int size = sizeof(arr)/sizeof(int);
	print_array(arr,size);
	sorting_array(arr,size);
	cout<<endl;
	print_array(arr,size);
	cout<<endl<<"Largest number is : " << arr[size-1];
//	cout<<largest_number(arr,5);
}
