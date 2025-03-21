// Take a number input from user and check if it is palindrome or not

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    int orgNum = n;
    
    int rev = 0;
    
    while(n!=0){
        int digit = n%10;
        rev = (rev*10) + digit;
        n/=10;
    }
    
    if( orgNum == rev ){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}