/*
Given a string of size n and you have to return true if its is a valid palindrome
otherwise false. String will contain numbers, alphabets & special characters
but only check for numbers and characters.

NOTE: 'A' and 'a' will be treated as same.
*/

#include<iostream>
using namespace std;

bool isAlphaNumeric(char ch){
    if(ch >= 0 && ch <= 9 || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <='Z'){
        return true;
    }
    
    return false;
}

bool isValidPalindrome(string s){
    
    int st = 0, e = s.size()-1;
    
    while(st<=e){
        if(!isAlphaNumeric(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(s[e])){
            e--;
            continue;
        }
        
        if(tolower(s[st]) != tolower(s[e])){
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    
    return true;
    
}

int main(){
    
    string s = "a#A-67£Nc@D_+c+N*7*6aa";
    
    cout<<isValidPalindrome(s);
}

