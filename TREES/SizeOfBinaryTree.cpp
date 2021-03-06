#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};
int getBTSize(Node *root){
    if (root==NULL){
        return 0;

    }
    else {
        return 1+getBTSize(root->left)+getBTSize(root->right);
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->right->left=new Node(50);
    // root->right->right=new Node(60);

    cout<<"Size of the Binary Tree is :"<<getBTSize(root);
    cout<<endl;
     return 0;

}