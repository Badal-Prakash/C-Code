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
    ~node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
void insertathead(node* &head,int d)
    {
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
void insertattail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void insertatpos(node* &tail,node* &head,int position,int d)

{
    if(position==1)
    {
        insertathead(head,d);
        return;
    }
    node* newnode=new node(d);
    node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
    void print(node* &head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertathead(head,100) ;
    print(head);
    insertathead(head,123) ;
    print(head);
    insertathead(head,13232) ;
    print(head);
    insertattail(tail,1234);
    print(head);
    insertatpos(tail,head,3,121112122);
    print(head);
    insertatpos(tail,head,1,5555);
    print(head);
    insertatpos(tail,head,8,5555);
    print(head);
    return 0;
}