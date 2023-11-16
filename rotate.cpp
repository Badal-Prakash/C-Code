#include<bits/stdc++.h>
using namespace std;
// void rotate(int arr[],int n)
// {
//     int temp=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void rotate(int arr[],int n,int k)
// {
//     int temp[k];
//     for(int i=0;i<k;i++)
//     {
//         temp[i]=arr[i];
//     }
//     for(int i=k;i<n;i++)
//     {
//         arr[i-k]=arr[i];
//     }
//     for(int i=0;i<k;i++)
//     {
//         arr[n+i-k]=temp[i];
//     }
// }

void rotate(int arr[],int n,int d)
{
    
}
int main()
{

    int arr[5]={1,2,3,4,5};
    rotate(arr,5,3);
     for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   }
    
    return 0;
}