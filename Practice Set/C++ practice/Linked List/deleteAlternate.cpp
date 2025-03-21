/* 
Delete every alternate elememts in linked list
For example : 
input - 1 2 3 4 5
output - 1 3 5
*/

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

void traverse(Node *head){
    
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAlternate(Node *&head){
    
    if(head==NULL){
        return;
    }
    
    Node *temp = head;
    
    while(temp != NULL && temp->next != NULL){
        Node *current = temp->next;
        temp->next = temp->next->next;
        free(current);
        temp = temp->next;
    }
}

int main(){
    
    Node *head1 = new Node(1);
    Node *head2 = new Node(2);
    Node *head3 = new Node(3);
    Node *head4 = new Node(4);
    Node *head5 = new Node(5);
    
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    
    traverse(head1);
    deleteAlternate(head1);
    traverse(head1);
    
    
}