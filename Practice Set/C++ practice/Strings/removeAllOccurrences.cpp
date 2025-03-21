/*
Given a string and a part of that string and you have to remove all the
occurrences of that part from the string

For example : string = abctbacuabc, part = abc
return string = tbacu
*/
   
#include<iostream>
using namespace std;

string removeAllOccurrence(string s, string part){
    
    if(s.size() < part.size()){ 
        return s;
    }
    
    while(s.size() > 0 && s.find(part) < s.size()-1){
        s.erase(s.find(part), part.size());
    }
    
    return s;
}

int main(){
    
    string s = "abcytBcaabcbvuvabc";
    string part = "abc";
    
    cout<<removeAllOccurrence(s, part);
}

