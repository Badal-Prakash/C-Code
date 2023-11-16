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
    ~node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
void insertnode(node * &tail,int element,int d)
{
    if(tail==NULL)
    {
        node * temp=new node(d);
        tail=temp;
        temp->next=temp;
    }
    else
    {
        node *curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        node*temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node * &tail)
{
    node *temp=tail;
    if(tail==NULL)
    {
        cout<<"empty";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
void deletenode(node * &tail,int value)

{
    if(tail==NULL)
    {
        cout<<"emoty ll";
        return;
    }
    else{
        node *prev=tail;
        node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        
        }
        prev->next=curr->next;
        if(curr==prev)
        {
            tail=NULL;
        }
        else if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
int main()
{
    node *tail=NULL;
    insertnode(tail,10,1);
    print(tail);
    insertnode(tail,1,1111);
    print(tail);
    
    // insertnode(tail,1111,10101);
    // print(tail);
    deletenode(tail,1);
    print(tail);


    return 0;
}