#include<iostream>
using namespace std;

class Stack{
    
    int *arr;
    int top;
    int size;
    
    public:
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int val){
        if(top == size-1){
            cout<<"STACK IS FULL"<<endl;
            return;
        }
        
        top++;
        arr[top] = val;
    }
    
    void pop(){
        if(top == -1){
            cout<<"STACK IS EMPTY"<<endl;
            return;
        }
        
        cout<<arr[top]<<" popped out from stack "<<endl;
        top--;
        
    }
    
    int capacity(){
        return size;
    }
    
    int peek(){
        return arr[top];
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    void printStack(){
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    ~Stack(){
        delete[] arr;
    }
};

int main(){
    
    Stack s(7);
    
    s.pop();
    
    cout<<(s.isEmpty() ? "Stack is empty" : "Stack is not empty")<<endl;
    
    s.push(7);
    s.push(2);
    s.push(5);
    
    cout<<"Peak element "<<s.peek()<<endl;
    cout<<"Total size of stack "<<s.capacity()<<endl;
    cout<<(s.isEmpty() ? "Stack is empty" : "Stack is not empty")<<endl;
    
    s.printStack();
    
    s.push(8);
    s.push(1);
    s.push(10);
    s.push(3);
    
    s.printStack();
    
}