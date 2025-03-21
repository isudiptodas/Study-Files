/*
Reverse words in a string

For example : 
input -> "The sky is pink"
output -> "pink is sky The"
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string wordReverse(string s){

    if(s.size() <= 0 || s.size() == 1){
       return s;
    }
    
    reverse(s.begin(), s.end());
 
    string ans = " ";
 
    for(int i=0; i<s.size(); i++){
     
        string word = " ";
     
        while(i<s.size() && s[i] != ' '){
           word+=s[i];
           i++;
        }
     
        reverse(word.begin(), word.end());
     
        ans+=" "+word;
    }
 
    return ans.substr(2, ans.size());
 
}

int main(){
    
    string s = "The sky is pink";
 
    cout<<wordReverse(s);
  
}