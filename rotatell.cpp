#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;

    }
};
void print(node* head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatbegin(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
node* insertatend(node* &head,int d){
    node* temp=new node(d);
    if(head==NULL)
    {
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return temp;
}
node *insertAtPos(node *head, int x, int pos){
    node *temp=new node(x);
    if(head==NULL){
        if(pos==1)return temp;
        else return head;
    }
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node *curr=head;
    for(int i=1;i<pos-1;i++){
        curr=curr->next;
        if(curr==NULL){
            cout<<"Position out of range"<<endl;
            return head;
        }
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
    void rotate(node* &head,int k)
    {
        
    }
int main()
{
    
    
    return 0;
}