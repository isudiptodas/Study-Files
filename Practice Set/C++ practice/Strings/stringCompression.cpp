/*
Given a string of size n, you have to compress it and return
its size. (NOTE : Use existing input)

Example : 

input -> aaabccdeefffgg
output -> a3bc2de2f3g2

*/

#include<iostream>
#include<string>
using namespace std;

string stringCompress(string s){
    
    int i=0;
    int index = 0;
    
    while(i < s.size()){
        
        int count = 0;
        char ch = s[i];
        
        while(i<s.size() && ch==s[i]){
            count++;
            i++;
        }
        
        if(count > 1 && count <= 9){
            s[index++] = ch;
            s[index++] = count + '0';
        }
        else if(count == 1){
            s[index++] = ch;
        }
        else{
            
            s[index++] = ch;
            
            string cn = to_string(count);
            
            for(char c : cn){
                s[index++] = c;
            }
        }
    }
    
    s.resize(index);
    return s;
}

int main(){
    
    string s = "aaabbcccddeffggghh";
    
    cout<<stringCompress(s);
}