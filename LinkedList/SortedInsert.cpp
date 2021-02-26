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

Node *SortedInsert(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return NULL;

    }
    if(head->data>x){
        temp->next=head;
        return temp;
        
    }
    Node *curr=head;
    while(curr->next!=NULL&&curr->next->data<x){
        curr=curr->next;
    }
    
    temp->next=curr->next;
    curr->next=temp;

     return head;
   
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=SortedInsert(head,25);
    for(Node *temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    return 0;

}