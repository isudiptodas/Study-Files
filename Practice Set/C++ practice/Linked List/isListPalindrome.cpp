// Find if the given linkedList is palindrome or not

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

bool isListPalindrome(Node *&head){
    
    if(head == NULL){
        return false;
    }
    
    Node *temp = head;
    vector<int>v;
    
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    
    int st = 0;
    int e = v.size()-1;
    
    for(int i = 0; i<v.size(); i++){
        if(v[st] != v[e]){
            return false;
        }
    }
    
    return true;
    
}

int main(){
    
    Node *head = new Node(1);
    Node *n1 = new Node(4);
    Node *n2 = new Node(5);
    Node *n3 = new Node(5);
    Node *n4 = new Node(4);
    Node *n5 = new Node(1);
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    bool isPal = isListPalindrome(head);
    
    if(isPal){
        cout<<"List is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    
}