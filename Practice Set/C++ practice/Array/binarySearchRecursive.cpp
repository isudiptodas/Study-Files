/*
Given a sorted array of size n and an element, you have to find the element
by applying binary search recursive method
*/

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int val, int s, int e){
    
    if(s>e){
        return -1;
    }
    
    int mid = s+(e-s)/2;
        
    if(arr[mid]==val){
        return mid;
    }
    else if(val < arr[mid]){
        return binarySearch(arr, n, val, s, mid-1);
    }
    else{
        return binarySearch(arr, n, val, mid+1, e);
    }
    
}

int main(){
    
    int arr[] = {2, 4, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 9;
    
    cout<<binarySearch(arr, n, val, 0, n-1);
}