// Take an array input from user an check is the array sorted

#include<iostream>
using namespace std;

int main(){

    int arr[100], n;
    bool isAscending = true;
    bool isDescending = true;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isAscending = false;
        }
        else if(arr[i] < arr[i+1]){
            isDescending = false;
        }
    }

    if(isAscending){
        cout<<"Array is sorted in ascending order"<<endl;
    }
    else if(isDescending){
        cout<<"Array is sorted in descending order"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

}