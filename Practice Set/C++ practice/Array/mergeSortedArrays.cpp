/*
Given two sorted array of size m and n and you have merge them
in one single array
*/

#include<iostream>
using namespace std;

void mergeSortedArrays(int arr[], int m, int arr2[], int n){
    
    int size = m+n;
    
    int arr3[size];
    int i=0, j=0, k=0;
    
    while(i<m && j<n){
        if(arr[i] <= arr2[j]){
            arr3[k] = arr[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<m){
        arr3[k] = arr[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    for(int i=0; i<size; i++){
        cout<<arr3[i]<<" ";
    }

}

int main(){
    
    int arr[] = {1, 4, 6, 8};
    int arr2[] = {2, 3, 5, 7};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    mergeSortedArrays(arr, m, arr2, n);
    
}