#include <iostream>
using namespace std;
int arr_sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
 int l =arr_sum(a,n);
 cout<<l;
return 0;
}
