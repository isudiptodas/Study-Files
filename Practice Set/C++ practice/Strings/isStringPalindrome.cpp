/*
Given a string you have to check if it's palindrome or not
if yes then return 1 and 0 otherwise
*/

#include<iostream>
using namespace std;

int isPal(string s){
    
    string orgStr = s;
    
    int st = 0, e = s.size()-1;
    
    while(st<=e){
        swap(s[st], s[e]);
        st++, e--;
    }
    
    if(s == orgStr){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    string s = "netflix";
    
    cout<<isPal(s);
}