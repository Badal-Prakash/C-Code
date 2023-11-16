// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<head->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// void insertAtHead(Node* &head,int d)
// {
//     Node *temp=new Node(d);
//     temp->next= head;
//     head=temp;
// }
// int main()
// {
//    Node* node1=new Node(1000);
//    Node* head=node1;
//    print(head);
//    insertAtHead(head,100);
//    print(head);
// }
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
int main()
{
    // node *node1=new node(1100);
    node*head=NULL;
    insertathead(head,100);
    print(head);
    insertathead(head,100);
    print(head);
    insertathead(head,100);
    print(head);
    insertathead(head,100);
    print(head);
    insertathead(head,100);
    print(head);
    
    return 0;
}