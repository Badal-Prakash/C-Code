#include <iostream>
using namespace std;
int bs(int arr[],int n,int key)
{
        int s=0;
        int l=n-1;
        int mid=(s+l)/2;
        while(s<=l){
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            l=mid-1;
        }
       mid=(s+l)/2;
        }
        return -1;
        
}
int main()
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={1,2,3,4,5};
    int index1= bs(arr1,6,6);
    int index2= bs(arr2,5,3);
    cout<<index1<<endl;
    cout<<index2<<endl;

return 0;
}
