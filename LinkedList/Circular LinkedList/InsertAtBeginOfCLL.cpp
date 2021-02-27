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
Node *insertAtBeginning(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node *curr=head;
        while(curr->next!=head){
            curr=curr->next;

        }
        curr->next=temp;
        temp->next=head;
        return temp;
    }
}
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
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    Node *p=insertAtBeginning(head,5);
    Traverse(p);
    
    return 0;

}    