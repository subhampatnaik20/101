#include <iostream>

using namespace std;


void print_arr(int arr[], int size){
    cout<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void delete_first_element(int arr[], int size){
    cout<<endl;
    for(int i=1; i<size ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void delete_last_element(int arr[],int size){
    cout<<endl;
    for(int i=0; i<size-1; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void delete_n_th_element(int arr[],int size,int index){
    for(int i=0; i<size; i++){
        if(i+1==index){
            continue;
        }
        cout<<arr[i]<<" ";
    }
}

void delete_range(int arr[], int size, int start, int end){
    cout<<endl;
    for(int i=0;i<size;i++){
        if(i+1==start){
            i=end;
        }
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={4,5,78,12,65,20,7,9,45,63};
    
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"Initial array: ";
    print_arr(arr,size);
    
    cout<<"Delete first element:";
    delete_first_element(arr,size);
    
    cout<<"Delete last element";
    delete_last_element(arr,size);
    
    cout<<"Delete nth element:";
    int index;
    cout<<endl<<"Which index element you want to delete: ";
    cin>>index;
    delete_n_th_element(arr,size,index);
    
    cout<<endl<<"Delete range:"<<endl;
    int start,end;
    cout<<"Enter start: "<<endl;
    cin>>start;
    cout<<"Enter end: "<<endl;
    cin>>end;
    delete_range(arr,size,start,end);

    return 0;
}
