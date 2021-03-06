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

//Inorder Traversal
void Inorder(Node *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}


//PreOrder Traversal
void PreOrder(Node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        PreOrder(root->left);
        PreOrder(root->right);

    }
}

//PostOrder Traversal

void PostOrder(Node *root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->key<<" ";
    }
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);

    cout<<"Inorder Traversal"<<endl;
    Inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal"<<endl;
    PreOrder(root);
    cout<<endl;
    cout<<"PostOrder Traversal"<<endl;
    PostOrder(root);

    return 0;

}
