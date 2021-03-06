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

int HeightBT(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(HeightBT(root->left),HeightBT(root->right))+1;
    }
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(20);
    root->right->left=new Node(30);
    root->right->right=new Node(40);
    // root->right->left->left=new Node(50);
    cout<<"Height of binary tree is "<<HeightBT(root)<<endl;
    return 0;

}