#include <iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        int ans=sorted(arr+1,n-1);
        return ans;
    }
    
}
int arrsum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    else{
       
        int ans =arr[0]+arrsum(arr+1,n-1);
        return ans;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
   int l=sorted(arr,5);
   if(l==1)
   {
    cout<<"sorted"<<endl;
   }
   else{
    cout<<"not sorted"<<endl;
   }
   int m = arrsum(arr,5);
   cout<<m<<endl;
   int sum =0;
   int k;
   for(int i=0;i<5;i++)
   {
    sum=sum+arr[i];
     
   }
    cout<<sum;
return 0;
}
