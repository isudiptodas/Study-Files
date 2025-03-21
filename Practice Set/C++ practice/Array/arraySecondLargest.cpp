/*
Given an array of size n and return its 2nd largest element, and
if not present then return -1
*/

#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int n){
    
    int max = 0;
    int sm = -1;
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]==max){
            continue;
        }
        
        if(arr[i]>sm){
            sm = arr[i];
        }
    }
    
    return sm;
}
int main(){
    
    int arr[] = {3, 11, 2, 8, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<secondLargest(arr, n);
}