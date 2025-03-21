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

void insertAtBeginning(Node *&head, int data){
    
    if(head==NULL){
        head = new Node(data);
        return;
    }
    
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    
    
}

void insertAtEnd(Node *&head, int data){
    
    if(head==NULL){
        head = new Node(data);
        return;
    }
    
    Node *temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    Node *newNode = new Node(data);
    temp->next = newNode;
    
}

void printList(Node *head){
    
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    
    cout<<endl;
}

void deleteAtBeginning(Node *&head){
    
    if(head == NULL){
        return;
    }
    
    head = head->next;
}

void deleteAtEnd(Node *&head){
   
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    temp->next = NULL;
    
}

int main(){
    
    Node *head = NULL;
    
    insertAtBeginning(head, 6);
    insertAtBeginning(head, 8);
    insertAtBeginning(head, 11);
    
    printList(head);
    
    insertAtEnd(head, 2);
    insertAtEnd(head, 21);
    
    printList(head);
    
    deleteAtEnd(head);
    deleteAtBeginning(head);
    
    printList(head);
    
}