/*
Given an array of size n and you have to return the first duplicate
element and if no duplicate found then return -1
*/

#include<iostream>
#include<vector>
using namespace std;

int firstDuplicate(int arr[], int n){
    
    vector<int> v;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<v.size(); j++){
            if(v[j]==arr[i]){
                return arr[i];
            }
        }
        
        v.push_back(arr[i]);
    }
    
    return -1;
    
}

int main(){
    
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<firstDuplicate(arr, n)<<endl;
}



