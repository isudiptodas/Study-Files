// Given a linked list in sorted order you have to remove all duplicate elememts 

#include<iostream>
#include<vector>
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

void printList(Node *&head){
    
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    
    cout<<"NULL";
    
}

void removeDuplicate(Node *&head){
    
    Node *current = head->next;
    Node *prev = head;
    
    while(current != NULL){
        if(current->data == prev->data){
            prev->next = current->next;
            current = prev->next;
        }
        else{
            current = current->next;
            prev = prev->next;
        }
    }
    
    printList(head);
    
}

int main(){
  
    Node *head = new Node(2);
    Node *head2 = new Node(2);
    Node *head3 = new Node(3);
    Node *head4 = new Node(4);
    Node *head5 = new Node(5);
    Node *head6 = new Node(5);
    Node *head7 = new Node(5);
  
    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = head7;
    
    removeDuplicate(head);
    
}
