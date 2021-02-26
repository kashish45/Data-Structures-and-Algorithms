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

void PrintMiddle(Node *head){
    if(head==NULL){
        cout<<"NULL";
    }
    Node *curr;
    int count=0;
    for(curr=head;curr!=NULL;curr=curr->next){
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++){
        curr=curr->next;
    }
    cout<<curr->data;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    PrintMiddle(head);
    return 0;
}