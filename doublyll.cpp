#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
    //constructor
    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    //destructor
    ~node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL; 
        }
    }
};
void print(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLen(node *head)
{
    node *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;

}
void insertAtHead(node * &tail,node * &head,int d)
{
    if(head==NULL)
    {
        node *temp=new node(d);
        head=temp;
        tail=temp;
    }
    else
    {
    node *temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp; 
    }
}
void insertAtTail(node * & tail,node * &head,int d)
{
    if(tail==NULL)
    {
        node *temp=new node(d);
        tail=temp;
        head=temp;   
    }
    else{node * temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;}
}
void insertAtPosition(node * &tail,node * &head,int position,int d)
{
    if(position==1)
    {
        insertAtHead(tail,head,d);
        return;
    }
    node *temp=head;
    int count=1;
    while(count<position-1){
temp=temp->next;
count++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,head,d);
        return;
    }
    node * nodeTOinsert=new node(d);
    nodeTOinsert->next=temp->next;
    temp->next->prev=nodeTOinsert;
    temp->next=nodeTOinsert;
    nodeTOinsert->prev=temp;
}
void deletenode(int position,node * head)
{
    if(position==1)
    {
        node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
         temp->next=NULL;
        delete temp;
    }
    else{
        node *curr=head;
        node *prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
 
    node *head=NULL;
    node *tail=NULL;

    // print(head);
    // cout<<getLen(head);
    insertAtHead(tail,head,100);
    print(head);
     cout<<getLen(head);
     insertAtTail(tail,head,25);
     print(head);
     insertAtPosition(tail,head,2,123);
     print(head);
     insertAtPosition(tail,head,1,12);
     print(head);
     insertAtPosition(tail,head,4,123);
     print(head);
    deletenode(3,head);
    print(head);
    return 0;
}