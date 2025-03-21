/*
Given a mountain array of size n and you have to find the peak element
*/

#include<iostream>
#include<climits>
using namespace std;

int peakElement(int arr[], int n){
    
    int s=0, e = n-1;
    int mid;
    
    while(s<=e){
        mid = s+(e-s)/2;
        
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    
    return -1;
    
}
int main(){
    
    int arr[] = {3, 4, 8, 9, 11, 17, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<peakElement(arr, n);
    
}