// Reverse a linked list

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

void reverseLinkedList(Node *&head){
    
    if(head == NULL){
        return;
    }
    
    vector<int>v;
    Node *temp = head;
    
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    
    int i = v.size()-1;
    
    Node *node = head;
    
    while(node!=NULL){
        node->data = v[i];
        node = node->next;
        i--;
    }
    
}

void printList(Node *&head){
    
    if(head == NULL){
        cout<<"List is empty";
        return;
    }
    
    Node *temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    Node *head = new Node(7);
    Node *n1 = new Node(4);
    Node *n2 = new Node(2);
    Node *n3 = new Node(10);
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;

    printList(head);
    reverseLinkedList(head);
    printList(head);
    
}