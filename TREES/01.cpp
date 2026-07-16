#include <iostream>
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

//Counting the number of nodes in a binary tree using RECURSION.
int countNodes(Node* root){
    if(root==NULL) return 0;

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount + rightCount + 1;
};

//Counting the number of leaf nodes in a binary tree using RECURSION.
int countLeafNodes(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int lf = countLeafNodes(root->left);
    int rf = countLeafNodes(root->right);   
    return lf+rf;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Number of nodes: " << countNodes(root) << endl;
    return 0;
}