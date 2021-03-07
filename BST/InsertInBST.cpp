#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};


Node *insertRecursive(Node *root,int x){
    if(root==NULL){
        return new Node(x);

    }
    else if(root->data>x){
        root->left=insertRecursive(root->left,x);

    }
    else if(root->data<x){
        root->right=insertRecursive(root->right,x);
    }
    return root;
}

void Traversal(Node *root){
   if(root!=NULL){
       cout<<root->data<<" ";
       Traversal(root->left);
       Traversal(root->right);
   }
}

int main(){
    Node *root=NULL;
    root=insertRecursive(root,10);
    insertRecursive(root,20);
    insertRecursive(root,5);
    Traversal(root);
    return 0;


}