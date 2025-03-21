// Take a number input from user and count the sum of its digits

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    int sum = 0;
    
    while(n!=0){
        int digit = n%10;
        sum+=digit;
        n/=10;
    }
    
    cout<<"Sum of digits are : "<<sum<<endl;
}