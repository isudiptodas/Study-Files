/*
Check if a string is rotated by 2 places

For example : 
input1 -> amazon
input2 -> azonam

Return true if input2 is 2 place rotated of input1
and false otherwise
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void rotateClockwise(string &s){
    
    if(s.size()<=1){
        return;
    }
    
    char ch = s[s.size()-1];
    
    for(int i=s.size()-1; i>0; i--){
        s[i] = s[i-1];
    }
    
    s[0] = ch;
    
}

void rotateAntiClockwise(string &s){
    
    if(s.size()<=1){
        return;
    }
    
    char ch = s[0];
    
    for(int i=0; i<s.size()-1; i++){
        s[i] = s[i+1];
    }
    
    s[s.size()-1] = ch;
   
    
}

bool is2placeRotated(string *s1, string *s2){
    
    string orgStr = *s1;
    
    rotateClockwise(*s1);
    rotateClockwise(*s1);
    
    if(*s1 == *s2){
        return true;
    }
    
    rotateAntiClockwise(orgStr);
    rotateAntiClockwise(orgStr);
    
    if(orgStr == *s2){
        return true;
    }
    
    return false;
    
}

int main(){
    
    string s1 = "netflix";
    string s2 = "tflixne";
    
    cout<<is2placeRotated(&s1, &s2);
    
    
}