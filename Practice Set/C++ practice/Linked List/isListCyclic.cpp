// Given a linked list, you have to return 1 if a loop is present otherwise 0

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

int isCyclePresent(Node* &head){
    
    if(head == NULL){
        return -1;
    }
    
    Node *fast = head;
    Node *slow = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast == slow){
            return 1;
        }
    }
    
    return 0;
    
}


int main(){
    
    Node *head = new Node(6);
    Node *head2 = new Node(7);
    Node *head3 = new Node(4);
    Node *head4 = new Node(9);
    Node *head5 = new Node(11);
    Node *head6 = new Node(3);
    
    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = head4;
    
    
    cout<<isCyclePresent(head);
  
    
}