#include <iostream>
using namespace std;
int sum1(int *arr,int n)
{
    int sum=0;
  for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=sum1(arr,n);

    cout<<l<<endl;
return 0;
}
