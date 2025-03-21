/*
Given a string of size n and you have to return the number of 
uppercase and lowercase characters present in it. And if any case is missing
return 0
*/

#include<iostream>
using namespace std;
     
void characterCaseCount(string s){
    
    int up = 0, low = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <='z'){
            low++;
        }
        else{
            up++;
        }
    }
    
    cout<<"Uppercase characters : "<<up<<endl;
    cout<<"Lowercase characters : "<<low<<endl;
    
}

int main(){
    
    string s = "lEeTCode";
    
    characterCaseCount(s);
}
