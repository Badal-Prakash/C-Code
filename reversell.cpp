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

node* deltail(node* head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL) 
    {
        delete head;
        return NULL;
    }
    node* curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}
// int searchll(node* head,int k)
// {
//     if(head==NULL)
//     {
//         return -1;
//     }
//     node* curr=head;
//     int count=1;

//     while(curr->next!=NULL){
//         count++;
//         if(curr->data==k)
//         {
//             return count;
//             break;
//         }
//     }
//     return -1;
// }
int searchrl(node* head,int k)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==k)
    {
        return 1;
    }
    else{
        int res=searchrl(head->next,k);
        if(res==-1) return -1;
        else{
            return res+1;
        }
    }
}



int main()
{
     node*head=NULL;
    insertathead(head,100);
    print(head);
    insertathead(head,200);
    print(head);
    insertathead(head,300);
    print(head);
    insertathead(head,400);
    print(head);
    insertathead(head,500);
    print(head);
    cout<<searchrl(head,300)<<endl;
    // print(head);
    return 0;
}