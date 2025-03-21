// Take an array input from user and reverse its every one neighbour element

#include<iostream>
using namespace std;

int main(){

    int arr[100], n;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Original array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i+=2){
        swap(arr[i], arr[i+1]);
    }

    cout<<"Array after reversing neighbour element : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}