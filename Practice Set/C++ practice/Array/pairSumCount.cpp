/* 
An array is given of size n and a sum of two digits, you have to find
the count of pairs for which the sum will be matched
*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[6] = {2, 9, 6, 5, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10, count = 0;
    
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
           if(arr[i]+arr[j] == sum){
               count++;
           }
       }
    }
    
    cout<<count<<endl;
    
}