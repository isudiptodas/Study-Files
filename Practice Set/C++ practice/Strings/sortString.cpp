/*
Sort a given string in ascending order
*/

#include<iostream>
#include<string>
using namespace std;

string sortString(string s){
    
    if(s.size() <= 1){
        return s;
    }
    
    for(int i=0; i<s.size()-1; i++){
        for(int j=0; j<s.size()-i-1; j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }

    
    return s;
    
}

int main(){
    
    string s = "zyxwvutsrqponmlkjihgfedcba";
    
    cout<<sortString(s);
}