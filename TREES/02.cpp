#include <stdio.h>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontnode = q.front();
        q.pop();

        if(frontnode!=NULL){
            cout<<frontnode->data<<" ";
            if(frontnode->left) q.push(frontnode->left);
            if(frontnode->right) q.push(frontnode->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    levelOrder(root);
}