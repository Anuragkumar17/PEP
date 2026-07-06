#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }
    
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void insertAtBegining(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }

    node->next = head;
    head = node;
}

void printList(Node* head){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data % 2 == 0){
            cout << temp->data << " ";
        }
        temp = temp->next;
    }
}

void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);
    Node* temp = head;
    if(pos==1){
        node->next=head;
        head=node;
        return;
    }
    for(int i=0;i<pos-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    node->next=temp->next;
    temp->next=node;
}

void deleteAtEnd(Node* &head ){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}

void deleteAtbegining(Node* &head){
    if(head==NULL) return;
    Node* temp = head;
    head=head->next;
    delete temp;
}

void  deleteAtPosition(Node* &head, int pos){
    if(head==NULL) return;
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp = head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    Node* temp1 = temp->next;;
    temp->next=temp->next->next;
    delete temp1;
}

int main(){
    Node* head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    printList(head);
}