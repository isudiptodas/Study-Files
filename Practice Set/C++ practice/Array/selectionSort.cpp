// Given an unsorted array of size n, perform selection sort

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int si = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        
        swap(arr[si], arr[i]);
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[] = {2, 5, 1, 9, 4, 7, 18, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr, n);
    
}
