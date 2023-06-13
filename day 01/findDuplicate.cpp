#include <iostream>
#include <vector>  
#include <algorithm> 
using namespace std;

int printArray(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<<" ";
	}
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



bool findDuplicate(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		if(arr[i]==arr[i+1]){
			cout<<"true";
//			return true;
		}
	}
	cout<<"false";
//	return false;
}


int main(){
	int arr[5]={5,7,8,9};
	int size = sizeof(arr)/sizeof(int);
	
	printArray(arr,size);
	insertionSort(arr,size);
	cout<<endl;
	printArray(arr,size);
	cout<<endl;
	findDuplicate(arr,size);
}
