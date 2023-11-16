#include <iostream>
using namespace std;

void reve(int a[],int n)
{
    int s=0;
    int l=1;
    while(s!=n-1&l!=n-1)
    {
    swap(a[s],a[l]);
      s=s+2;
      l=l+2;
    }
}
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,0,4,5};
    int brr[5]={1,2,3,4,5};
    reve(arr,6);
    reve(brr,5);
    printarr(arr,6);
    printarr(brr,5);
return 0;
}
