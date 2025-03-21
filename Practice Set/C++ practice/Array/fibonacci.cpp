/*
Find out the nth fibonacci term
*/

#include<iostream>
using namespace std;

void fibo(int n){
    
    int arr[n];
    
    arr[0] = 0;
    arr[1] = 1;
    
    for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    
    int n = 9;
    
    fibo(n);
    
}