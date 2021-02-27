#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }

};

void Traverse(Node *head){
    if(head==NULL){
        cout<<"NULL";
    }
    cout<<head->data<<" ";
    
    for(Node *p=head->next;p!=head;p=p->next){
        cout<<p->data<<" ";
    }
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    Traverse(head);


 return 0;
}
