// #include<bits/stdc++.h>
// using namespace std;
// int insert(int arr[],int n,int x,int cap,int pos){
//     if(n==cap)
//     {
//         return n;
//     }
    
//     int index=pos-1;
//     for(int i=n-1;i>=index;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[index]=x;
//     return (n+1);
// }
// int main()
// {
   
// int arr[5]={1,2,3,4};
//     insert(arr,5,00,5,3);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


//Function to sort the given doubly linked list using Merge Sort.






