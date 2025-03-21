// Given a linked list, print all the elements in reverse order

#include<iostream>
using namespace std;

class Node{
public : 
   int data;
   Node *next;
   
   Node(int data){
       this->data = data;
       next = NULL;
   }

};

void insertAtHead(Node* &head, int data){
    
    if(head == NULL){
        head = new Node(data);
        return;
    }
    
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node *head){
    
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    
    Node *temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<" NULL "<<endl;
}

void reversePrint(Node* head){
    
    if(head == NULL){
        return;
    }
    
    reversePrint(head->next);
    cout<<head->data<<" -> ";
    
}


int main(){
    
    Node *head = NULL;
    
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    
    print(head);
    
    reversePrint(head);
 
}
