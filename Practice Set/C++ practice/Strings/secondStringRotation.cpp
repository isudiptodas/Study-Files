/*
Given two strings and you have to return true if the second string is 
rotation of 1st string otherwise return false
*/

#include<iostream>
using namespace std;

bool isRotation(string str, string str2){
    
    if(str.size() != str2.size()){
        return false;
    }
    
    int st = 0, e = str2.size()-1;
    
    while(st<=e){
        if(str[st] != str2[e] && str[e] != str2[st]){
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
    
    string str = "netflix";
    string str2 = "xilften";
    
    cout<<isRotation(str, str2);
    
}



