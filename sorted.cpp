#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
// bool sorted(int arr[],int n)
// {
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
int main()
{
     int arr[7]={1,2,3,4,5,6,7};
     cout<<sorted(arr,7);
    
    return 0;
}