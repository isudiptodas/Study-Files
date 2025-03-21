// Given two linked list return 1 if equal otherwise 0

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

int isEqual(Node* &head, Node* &head2){
    
    if(head == NULL || head2 == NULL){
        return 0;
    }
    
    Node *pt1 = head;
    Node *pt2 = head2;
    
    while(pt1 != NULL && pt2 != NULL){
        if(pt1->data != pt2->data){
            return 0;
        }
        else{
            pt1 = pt1->next;
            pt2 = pt2->next;
        }
    }
    
    if(pt1 == NULL && pt2 == NULL){
       return 1;
    }
    else{
        return 0;
    }
   
   
}


int main(){
    
    Node *head = NULL;
    Node *head2 = NULL;
    
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    
    insertAtHead(head2, 1);
    insertAtHead(head2, 2);
    insertAtHead(head2, 3);
    insertAtHead(head2, 4);
    insertAtHead(head2, 5);
    insertAtHead(head2, 6);
    insertAtHead(head2, 7);
    insertAtHead(head2, 8);
    
    //print(head);
    
    cout<<isEqual(head, head2);
    
}
