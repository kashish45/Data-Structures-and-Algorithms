#include<iostream>
#include<climits>
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
int getMax(Node *root){
    if(root==NULL){
        return INT_MIN;
    }

    else{
        return max(root->data,max(getMax(root->left),getMax(root->right)));

    }
    return 0;
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(80);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    cout<<"Maximum in Binary Tree is : "<<getMax(root);
    cout<<endl;
    return 0;


}