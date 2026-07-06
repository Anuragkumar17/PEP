//CIRCULAR LINKED-LIST 

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}

void insertAtBegining(Node* &head, int val){
    Node* node = new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;

}

void insertAtPosition(Node* &head, int pos){

}

void deleteAtEnd(Node* &head){

}

void deleteAtBegining(Node* head){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp = head;
    Node* temp1 = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head = head->next;
    temp->next=head;
    delete temp1;
}

int main(){

}