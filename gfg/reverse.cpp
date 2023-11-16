#include <iostream>
using namespace std;
void reverse(int arr[],int i,int n)
{
    while(i<=n)
    {
        swap(arr[i],arr[n]);
        i++;
        n--;
    }
}
// void printarr(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//        cout<< arr[i]<<" ";
//     }
//     cout<<endl;
// }
int main()
{
    int n=5;
    // int temp;
    // cin>>n;
    int i=0;
    int arr[5]={1,2,3,4,5};
    while(i<n)
    {
        swap(arr[i],arr[n-1]);
        i++;
        n--;
    }
    int sizeofarr=sizeof(arr)/sizeof(arr[0]);
     for (int i = 0; i < sizeofarr; i++)
    {
       cout<< arr[i]<<" ";
    }
    cout<<endl;
    
    // reverse(arr,0,n-1);
    // printarr(arr,n);
    return 0;
}
