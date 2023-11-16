#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node*prev;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node*head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void insertatbeg(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
    }
    head=temp;
}
node* insertatend(node* head,int d)
{
    node* temp=new node(d);
    if(head==NULL){
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
    return head;

}
// node *reverse(node *head){
//     node *temp=NULL;
//     node *curr=head;
//     while(curr!=NULL){
//         temp=curr->prev;
//         curr->prev=curr->next;
//         curr->next=temp;
//         curr=curr->prev;
//     }
//     if(temp!=NULL)head=temp->prev;
//     return head;
// }
//  node* deletehead(node* head)
//  {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     if(head->next==NULL)
// {
//     delete head;
//     return NULL;
// }
// node* temp=head;
// head=head->next;
// head->prev=NULL;
// delete temp;
// return head;
//  }
node *delHead(node * &head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    else{
        node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
//node* deletetail(node* &head)
// {
//     if(head==NULL) return NULL;
//     if(head->next==NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     node* curr=head;
//     while(curr->next!=NULL)
//     {
//         curr=curr->next;
//     }
//     curr->prev->next=NULL;
//     delete curr;
//     return head;
// }
node *delLast(node *head)
{
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->prev->next=NULL;
    delete curr;
    return head;
}

int main()
{
    
    node* head=new node(100);
    node* node1=new node(200);
    node* node2=new node(300);
    head->next=node1;
    node1->prev=head;
    node1->next=node2;
    node2->prev=node1;
    print(head);
  insertatbeg(head,500);
    print(head);
    insertatend(head,10000);
    print(head);
    delHead(head);
    print(head);
    delLast(head);
    print(head);
    return 0;
}