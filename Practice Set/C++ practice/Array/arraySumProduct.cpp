// Take an array input from user and return its sum and product

#include<iostream>
using namespace std; 

int main(){

    int n, arr[100];
    int sum = 0, prod = 1;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
        prod*=arr[i];
    }

    cout<<"Sum -> "<< sum <<endl;
    cout<<"Product -> "<< prod <<endl;
}
