/*
Take a number input from user and print the difference
of the digits sum and product
*/

#include<iostream>
using namespace std;

int main(){
    
    int n, sum = 0, prod = 1;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n!=0){
        int digit = n%10;
        sum+=digit;
        prod*=digit;
        n/=10;
    }
    
    cout<<"The difference is "<<prod-sum<<endl;
    
}