// #include<iostream>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node *next;
//     //constructor
//     node(int data)
//     {
//         this ->data=data;
//         this ->next=NULL;

//     }
// };
// void insertAtHead(node * &head,int d)
// {
//     //new node create
//     node *temp=new node(d);
//     temp->next=head;
//     head=temp;

// }
// void insertattail(node * &tail,int d)
// {
//     node *temp=new node(d);
//     tail->next=temp;
//     tail=tail->next;

// }

// void insertatposition(node * &head,int position,int d)
// {
//     node * temp=head;   
//     int cnt=1;
//     while(cnt<position-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }

// }
// void print(node * &head)
// {
//     node * temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     node *node1=new node(10);
//     // cout<<node1->data<<" ";
//     // cout<<node1->next<<" ";
    // node *head=node1;
    // node *tail=node1;
    // print(head);
    // insertattail(tail,12);
    // print(head);
//     insertattail(tail,15);
//     print(head);
//     insertattail(tail,1000);
//     print(head);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     int *next;
//     node(int d)
//     {
//         data=d;
//         next=NULL;
//     }
// };
// int main()
// {
//     node *head=new node(10);
//     node *temp=new node(20);
//     node *temp2=new node(30);
    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
//  class node
// {
//     public:
//     int data;
//     node *next;
//     //constructor
//     node(int data)
//     {
//         this ->data=data;
//         this ->next=NULL;

//     }
// };
// int main()
// {
//     node *node1=new node(10);
//      cout<<node1->data<<" ";
//     cout<<node1->next<<" ";
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    //constructor
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    //destructor
    ~node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data";
    }
};
void insertAtHead(node* &head,int d)
{
    node *temp=new node(d);
    temp->next= head;
    head=temp;
}
void insertattail(node * &tail,int d)
{
    node *temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertatposition(node * & tail,node * &head,int position,int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;

    }
    node *temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    node *nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deletenode(int position,node * &head)
{
    if(position==1)
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else
    {
        node *current=head;
        node *prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=current;
            current=current->next;
            cnt++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void print(node * &head)
{
     node *temp=head;
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
   
    insertAtHead(head,200);
    insertAtHead(head,20);
    insertattail(tail,20);
    insertattail(tail,20);
    insertatposition(tail,head,1,4000);
    print(head); 
    // cout<<"head"<<" "<<head->data<<" "<<"tail"<<" "<<tail->data;
    deletenode(5 ,head);
    print(head);
    return 0;
}