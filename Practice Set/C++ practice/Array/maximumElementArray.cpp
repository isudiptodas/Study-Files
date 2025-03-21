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

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Maximum element is : "<<max<<endl;

}