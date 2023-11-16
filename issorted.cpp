#include <iostream>
using namespace std;
bool issorted(int *arr,int n)
{
    int i=0;
    if(n==0||n==1)
    {
        return true ;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool ans=issorted(arr+1,n-1);
        return ans;
    }
}

int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    bool ans = issorted(arr,size);
    if(ans)
    {
         cout<<"yes";
    }
    else{
        cout<<"no";
    }
   
return 0;
}
