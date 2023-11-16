#include<bits/stdc++.h>
using namespace std;
void sc(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int arr[10]={1,4,2,3,9,3};
    sc(arr,6);
     for(int i=0;i<6;i++)
     {
        cout<<arr[i]<<" ";
     }
    
    return 0;
}