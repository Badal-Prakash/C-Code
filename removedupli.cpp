#include<bits/stdc++.h>
using namespace std;
int removedupli(int arr[],int n)
{
    int temp[n];
    int res=1;
    temp[0]=arr[0];
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    return res;
}
int main()
{
    int arr[8]={
        1,1,2,2,2,4,4,4
    };
    cout<<removedupli(arr,8)<<" ";

    for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}