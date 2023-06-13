#include<iostream>
using namespace std;

void print_array(int arr[], int n){
	for(int i=0 ; i<=n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void swap_alternet(int arr[],int size){
	for(int i=0 ; i<=size ; i+=2){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
	print_array(arr,size);
}

int main(){
	int arr1[4] = {1,5,9,3};
	int arr2[5] = {7,5,3,4,6};
	
	swap_alternet(arr1,4);
	swap_alternet(arr2,5);
}
