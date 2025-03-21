/*
sort an array using bubble sort
*/

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
	    bool swap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
		    swap = true;
            }
        }
	    if(swap==false){
		    return;
	    }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main() {
    
    int arr[50];
    int n;
    
    cout<<"Enter array size : ";
	cin>>n;
	
	cout<<"Enter array elements : ";
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	bubbleSort(arr, n);
	

}
