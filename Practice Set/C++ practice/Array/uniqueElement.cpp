/* 
An array is given of size n with duplicate elements and
only one element is unique, you have to find that
*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[7] = {2, 7, 6, 7, 6, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int unique = 0;
    
    for(int i=0; i<n; i++){
        unique^=arr[i];
    }
    
    cout<<"Unique element is : "<< unique <<endl;
    
}