// Take a number array input from user and reverse it

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int s = 0, e = n-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){

    int arr[100];
    int n;

    cout<<"Enter size of the array : ";
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

    reverse(arr, n);

    cout<<"Reversed array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

}