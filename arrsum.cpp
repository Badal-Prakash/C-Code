#include <iostream>
using namespace std;
int sum(int *arr,int n)
{
    
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    int rp=sum(arr+1,n-1);
    int sum1 = arr[0]+rp;
    return sum1;
    
}
int main()
{
       int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    int ans=sum(arr,5);
    cout<<ans;
return 0;
}
