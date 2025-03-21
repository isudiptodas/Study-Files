#include<iostream>
using namespace std;

int main(){

    int arr[100], n;

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min = arr[n-1];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"Minimum element is : "<<min<<endl;

}