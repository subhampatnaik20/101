#include<iostream>
using namespace std;



int print_array(int arr[] , int size ){
	for(int i=0 ; i<=size ; i++){
		cout<<arr[i]<<" ";
	}
}

int union_array(int arr1[] , int arr2[] , int size1 , int size2){
	for(int i=0 ; i<=size1 ; i++){
		for(int j=0 ; j<=size2 ; j++){
			if(arr1[i] < arr2[j]){
				cout<<arr1[i];
			} else {
				cout<<arr2[j];
			}
		}
	}
}

int main(){
	int arr1[]= {5,6,7,8,9,1};
	int arr2[]= {7,8,9,1,23,4}
	
	int size1 = sizeof(arr1)/sizeof(int);
	int size2 = sizeof(arr2)/sizeof(int);
	
	union_array(arr1 , arr2 , size1 , size2);
	print_array(arr,size);
}
