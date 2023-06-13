#include<iostream>
using namespace std;



int print_array(int arr[] , int size ){
	for(int i=0 ; i<=size ; i++){
		cout<<arr[i]<<" ";
	}
}

int sort_zero_one_two(int arr[] , int size){
	for(int i=0 ; i<=size ; i++){
		if(arr[i]==0){
			swap(arr[i],arr[0]);
			i++;
		}
		
		
		if(arr[i]==2){
			swap(arr[i],arr[size-1]);
			i--;
		}
	}
}

int main(){
	int arr[]= {1,0,1,0,2,2,0,1,0,0,1,1,2};
	
	int size = sizeof(arr)/sizeof(int);
	
	sort_zero_one_two(arr,size);
	print_array(arr,size);
}
