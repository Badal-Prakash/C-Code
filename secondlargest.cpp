#include<bits/stdc++.h>
using namespace std;
// int largest(int arr[],int n)
// {
//     int large=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>arr[large])
//         {
//             large=i;
//         }

//     }
//     return large;
// }
// int second(int arr[],int n)
// {
//     int larges=largest(arr,n);
//     int res=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr[larges])
//         {
//             if(res==-1)
//             {
//                 res=i;
//             }
//             else if(arr[i]>arr[res])
//             {
//                 res=i;
//             }
//         }
//     }
//     return res;
// }
int secon(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
     int arr[6]={1,2,344,43333,5,6};
    // cout<<largest(arr,6)<<endl;
    cout<<secon(arr,6);
    
    return 0;
}