#include <iostream>
using namespace std;
void rev(int arr[],int s,int k,int e)
{
    while(s<k)
    {
        swap(arr[s],arr[k]);
        s++;
        k--;
    }
}
void rev1(int arr[],int s,int k,int e){
    while(k<e)
    {
        swap(arr[k+1],arr[e]);
        k++;
        e--;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    rev(arr,0,2,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}
