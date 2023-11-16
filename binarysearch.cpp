#include<bits/stdc++.h>
using namespace std;
// int bs(int arr[],int n,int key)
// {
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         int mid;
//         mid=(s+e)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]>key)
//         {
//             e=mid-1;
//         }
//         else{
//            s=mid+1; 
//         }
        
//     }
//         return -1;
// }
int bs(int arr[],int low,int high,int key)
{
    if(low>high){
        return -1;
    }
    int mid;
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        return bs(arr,low,mid-1,key);

    }
    else{
         return bs(arr,mid+1,high,key);
    }
}
int main()
{
    
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i+5;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<bs(arr,0,10,12);
    return 0;
}