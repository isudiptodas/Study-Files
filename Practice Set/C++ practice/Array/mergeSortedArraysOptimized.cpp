/*
Given an two sorted arrays of size m and n where the size of first array 
is m+n. Merge them in 1st array without using an extra array space
*/

#include<iostream>
using namespace std;

void mergeSortedArray(int arr[], int m, int arr2[], int n){
    
    int i = m-1, j = n-1, k = m+n-1;
    
    while(i>=0 && j>=0){
        if(arr2[j]>arr[i]){
            arr[k] = arr2[j];
            k--;
            j--;
        }
        else{
            arr[k] = arr[i];
            k--;
            i--;
        }
    }
    
    while(j>=0){
        arr[k] = arr[j];
        j--;
        k--;
    }
    
    for(int i=0; i<m+n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    
    int arr[] = {1, 4, 6, 8, 0, 0, 0};
    int arr2[] = {2, 5, 7};
    int m = 4;
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    mergeSortedArray(arr, m, arr2, n);
    
}
