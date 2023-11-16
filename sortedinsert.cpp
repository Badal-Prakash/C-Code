#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;

    }
};
void print(node* head)
{
    node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
// node* sortedinsert(node* head,int k)
// {
//     node* temp=new node(k);
//     if(head==NULL)
//     {
//         return temp;
//     }
//     if(k<head->data)
//     {
//         temp->next=head;
//         return temp;
//     }
//     node* curr=head;
//     while(curr->next!=NULL&&curr->data<k)
//     {
//         curr=curr->next;
//     }
//     temp->next=curr->next;
//     curr->next=temp;
//     return head;
// }
int mid(node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    
}

int main()
{
    node*head=NULL;
    insertathead(head,500);
    print(head);
    insertathead(head,400);
    print(head);
    insertathead(head,300);
    print(head);
    insertathead(head,200);
    print(head);
    insertathead(head,100);
    print(head);
    sortedinsert(head,350);
    print(head);
    return 0;
}