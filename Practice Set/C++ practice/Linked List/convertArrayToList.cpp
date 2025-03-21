// Convert a given array into linked list

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

void convertArray(int arr[], int n, Node *&head){
    
    if(n<=1){
        return;
    }
    
    Node *tail = NULL;
    
    for(int i = 0; i<n; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->next = NULL;
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        
    }
    
    printList(head);
    
}

int main(){
  
    Node *head = NULL;
    int arr[] = {2, 5, 7, 3, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    convertArray(arr, n, head);
    
}
