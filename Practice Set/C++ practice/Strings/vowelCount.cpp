/*
Given a string of size n and you have to return the number of 
vowels present in it. Vowels can be in uppercase or lowercase
*/ 

#include<iostream>
#include<vector>
using namespace std;

int vowelCount(string str){
    
    int count = 0;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for(char ch : str){
        
        for(char v : vowels){
            if(ch == v){
                count++;
            }
        }
    }
    
    return count;
    
    
}

int main(){
    
    string s = "yOutUBe";
    
    cout<<vowelCount(s)<<endl;
}



