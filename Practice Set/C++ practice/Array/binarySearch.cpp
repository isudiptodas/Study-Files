/*
perform binary search on a given sorted array of size n and return index of
target element if present otherwise return -1
*/

int binarySearch(int arr[], int n, int val){
    int s = 0, e = n-1, mid;
    
    while(s<=e){
        
        mid = s+(e-s)/2;
        
        if(arr[mid] == val){
            return mid;
        }
        else if(val<arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    
    return -1;
}

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {2, 4, 5, 8, 11, 14, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<binarySearch(arr, n, 0);
    
}