#include<bits/stdc++.h>
using namespace std;
void is(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0&&arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int arr[10]={1,4,2,3,9,3};
    is(arr,6);
     for(int i=0;i<6;i++)
     {
        cout<<arr[i]<<" ";
     }
    
    return 0;
}