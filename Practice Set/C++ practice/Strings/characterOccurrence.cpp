/*
Take a string and a character input from user and return its 
first and last occurrence index and if not present then return -1
*/

#include<iostream>
using namespace std;

void occurrence(string str, char ch){
    
    int st = 0, e = str.size()-1, fIndex = -1, lIndex = -1;
    
    while(st<=e){
        if(str[st] == ch){
            fIndex = st;
        }
        if(str[e] == ch){
            lIndex = e;
        }
        
        st++;
        e--;
    }
    
    cout<<"First Index : "<<fIndex<<endl;
    cout<<"Last Index : "<<lIndex<<endl;
    
}

int main(){
    
    string str;
    char ch;
    
    cout<<"Enter a string : ";
    cin>>str;
    cout<<"Enter character to find occurrence : ";
    cin>>ch;
    
    occurrence(str, ch);
    
}



