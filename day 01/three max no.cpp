#include <iostream>
using namespace std;

void print_array(int arr[], int size){
	for(int i=0; i<size ;i++)
		cout<<arr[i]<<" ";
}

void bubble_sort(int arr[], int size){
	for( int i=0;i<size-1;i++){
		bool swapped = false;
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false)
			break;
		
	}
}

int main(){
	int arr[] = {1,69,55,202,111,1546,4,2,0};
	int size = sizeof(arr)/sizeof(int);
	print_array(arr,size);
	bubble_sort(arr,size);
	cout<<endl;
	print_array(arr,size);
	cout<<endl<<"The three largest elements are: "<<arr[size-1]<<" , "<<arr[size-2]<<" , "<<arr[size-3]<<".";
}
