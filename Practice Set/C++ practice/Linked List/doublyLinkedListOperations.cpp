// Show operations of doubly linked list

#include<iostream>
using namespace std;

class Node{

public :
   
   int data;
   Node *prev;
   Node *next;
   
   Node(int data){
       this->data = data;
       prev = NULL;
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
    head->prev = temp;
    head = temp;
}

void insertAtEnd(Node *&head, int data){
    
    if(head==NULL){
        head = new Node(data);
    }
    
    Node *temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    Node *newNode = new Node(data);
    newNode->prev = temp;
    temp->next = newNode;
}

void printList(Node *&head){
    
    if(head == NULL){
        cout<<"List is empty";
    }
    
    Node *temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtPosition(Node *&head, int pos, int data){
    
    if(head == NULL){
        return;
    }
    
    int current = 0;
    
    Node *temp = head;
    
    while(current != pos-1){
        temp = temp->next;
        current++;
    }
    
    Node *newNode = new Node(data);
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    
}

void deleteFromBeginning(Node *&head){
    
    if(head == NULL){
        return;
    }
    
    head = head->next;
    head->prev = NULL;
}

void deleteFromEnd(Node *&head){
    
    if(head==NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    temp->next = NULL;
    
}

void deleteFromPosition(Node *&head, int pos){
    
    if(head == NULL){
        return;
    }
    
    int current = 0;
    
    Node *temp = head;
    
    while(current != pos-1){
        temp = temp->next;
        current++;
    }
    
    temp->next = temp->next->next;
    
    if(temp->next != NULL){
        temp->next->prev = temp;
    }
}

int main(){
    
    Node *head = NULL;
    
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 5);
    
    printList(head);
    
    insertAtEnd(head, 4);
    insertAtEnd(head, 7);
    insertAtEnd(head, 9);
    
    printList(head);
    
    deleteFromBeginning(head);
    deleteFromEnd(head);
    
    printList(head);
    
    insertAtPosition(head, 2, 12);
    insertAtPosition(head, 1, 21);
    
    printList(head);
    
    deleteFromPosition(head, 2);
    deleteFromPosition(head, 4);
    
    printList(head);
    
}