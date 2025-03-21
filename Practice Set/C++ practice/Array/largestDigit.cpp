// Take an integer from the user and prints the largest digit in that number

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n, largestNum;
    vector<int> v;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    int rev = 0;
    
    while(n!=0){
        int digit = n%10;
        v.push_back(digit);
        n/=10;
    }
    
    largestNum = v[0];
    
    for(int i=0; i<v.size(); i++){
        if(v[i]>largestNum){
            largestNum = v[i];
        }
    }
    
    cout<<"Largest num is : "<< largestNum<<endl;
    
}