/*
Given a array of size n which is sorted and rotated, and you have 
to find a given value
*/
 
#include<iostream>
using namespace std;

int rotatedSorted(int arr[], int n, int val){
    
    int s=0, e = n-1;
    int mid;
    
    while(s<=e){
        mid = s+(e-s)/2;
        
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[s] <= arr[mid]){
            if(arr[s] < val && val < arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(arr[mid] < val && val < arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    
    return -1;
    
}
int main(){
    
    int arr[] =  {4, 8, 9, 11, 17, 1, 2, 3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int val = 1;
    
    cout<<rotatedSorted(arr, n, val);
    
}
