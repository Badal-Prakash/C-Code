#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n)
{
    int s=0;
    int l=n-1; 
    while(s<l)
    {
        swap(arr[s],arr[l]);
        s++;
        l--;
    }

}
int main()
{
   int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   } 
   cout<<endl;
   rev(arr,5);
   for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   } 
    
    return 0;
}