#include<bits/stdc++.h>
using namespace std;
// void movtoend(int arr[],int n)
// {
//     for(int i=0;i<n;i++)

//     {
//         if(arr[i]==0)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j]!=0)
//                 {
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }
void movtoend(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[10]={1,0,0,21,0,0,1,3,0,2};
    movtoend(arr,10);
    for(int i=0;i<10;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}