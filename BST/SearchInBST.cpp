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
bool method1(Node *root,int key){
    if(root==NULL){
        return true;
    }
    else if(root->data==key){
        return true;
    }
    else if(root->data>key){
        return method1(root->left,key);

    }
    else{
        return method1(root->right,key);
    }
}


bool method2(Node *root,int key){
    while(root!=NULL){
              if(root->data==key){
                  return true;
              }        
              else if(root->data<key){
                  root=root->right;
              }
              else{
                  root=root->left;

              }
    }
    return false;
}

int main(){
    Node *root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->right=new Node(80);
    root->right->left->left=new Node(16);
    if(method2(root,100)){
        cout<<"Element Present";
    }
    else{
        cout<<"element not present";
    }
    return 0;


}