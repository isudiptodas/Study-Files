// Take an array input from user and a number and return its count of occurrence

#include<iostream>
using namespace std;

int main(){
    
    int n, val, count = 0;
    int arr[50];
    
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the value you want to find occurrence : ";
    cin>>val;
    
    for(int i=0; i<n; i++){
        if(arr[i] == val){
            count++;
        }
    }
    
    cout<<"Occurrence of "<<val<<" is "<< count <<" times"<<endl;
    
}