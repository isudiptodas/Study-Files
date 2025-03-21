// Reverse a string by its pair neighbour element

#include<iostream>
using namespace std;

int main(){
    
    string s = "sudipto";
    
    int st= 0, e = s.size()-1;
    
    for(int i=0; i<s.size()-1; i+=2){
        swap(s[i], s[i+1]);
    }
    
    cout<<s<<endl;
   
}
