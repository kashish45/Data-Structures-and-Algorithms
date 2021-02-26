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
Node *del1st(Node *head){
    if(head==NULL){
        return NULL;

    }
    else{
        Node *temp=head->next;
        delete head;
        return temp;
    }

}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head=del1st(head);
    for(Node *temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    return 0;
}
