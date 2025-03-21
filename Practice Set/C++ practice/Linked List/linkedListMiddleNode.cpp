// Find the value of middle node of a linked list

#include<iostream>
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

void middleNode(Node *&head){
    
    if(head == NULL){
        return;
    }
    
    int count = 0;
    Node *temp = head;
    
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    
    int mid = count/2;
    int currentPosition = 0;
    
    Node *node = head;
    
    while(currentPosition != mid){
        currentPosition++;
        node = node->next;
    }
    
    cout<<node->data<<endl;
    
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
    Node *n4 = new Node(21);
    Node *n5 = new Node(34);
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    printList(head);
    middleNode(head);
    
}
