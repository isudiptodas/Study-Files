// Reverse a string

#include<iostream>
using namespace std;

int main(){
    
    string s = "sudipto";
    
    int st= 0, e = s.size()-1;
    
    while(st<=e){
        swap(s[st], s[e]);
        st++;
        e--;
    }
    
    cout<<s<<endl;
   
}