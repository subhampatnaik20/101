#include<iostream>
using namespace std;



int print_array(int arr[] , int size ){
	for(int i=0 ; i<=size ; i++){
		cout<<arr[i]<<" ";
	}
}

int swap_alt(int arr[] , int size){
	for(int i=0 ; i<=size ; i+=2){
		swap(arr[i],arr[i+1]);
	}
}

int main(){
	int arr[]= {1,5,45,22,3,78,1,9,6};
	
	int size = sizeof(arr)/sizeof(int);
	
	swap_alt(arr,size);
	print_array(arr,size);
}
