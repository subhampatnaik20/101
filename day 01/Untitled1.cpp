#include<iostream>
using namespace std;



int print_array(int arr[] , int size ){
	for(int i=0 ; i<=size ; i++){
		cout<<i<<" ";
	}
}

int max_no_array(int arr[] , int size){
	int ans = INT_MIN;
	for(int i=0 ; i<=size ; i++){
		if(ans < arr[i]){
			ans = arr[i];
		}
	}
	cout<<ans;
}

int main(){
	int arr[]= {1,5,45,22,3,78,1,9,6};
	
	int size = sizeof(arr)/sizeof(int);
	
	max_no_array(arr,size);
}
