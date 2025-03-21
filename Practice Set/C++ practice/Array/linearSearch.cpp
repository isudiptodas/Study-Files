// Take an array input from user and search for a given number

#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int val){

    bool isFound = false;

    for(int i=0; i<n; i++){
        if(arr[i] == val){
            cout<<"Value "<<val<< " found at index "<<i<<endl;
            isFound = true;
            break;
        }
    }

    if(!isFound){
        cout<<"Value not present in array"<<endl;
    }
}

int main(){

    int arr[50], n, val;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value to search : ";
    cin>>val;

    linearSearch(arr, n, val);

    
}