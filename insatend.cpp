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
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* insertattail(node *head,int d)
{
    node* temp=new node(d);
    if(head==NULL)
    {
        return temp;
    }
    node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
int main()
{
    
    node* head=NULL;
    head=insertattail(head,10);
    print(head);
    return 0;
}