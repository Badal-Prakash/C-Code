#include<bits/stdc++.h>
using namespace std;
// int largest(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         bool flag=true;
//         for(int j=0;j<n;j++)
//         {
//             if(arr[j]>arr[i])
//             {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true)
//         {
//             return i;
//         }


//     }
//     return -1;
// }
int largest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    return res;
}
int main()
{
    int arr[6]={1,2,344,4,5,6};
    cout<<largest(arr,6);

    
    
    return 0;
}