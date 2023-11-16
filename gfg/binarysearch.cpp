#include <iostream>
using namespace std;
int bs(int arr[],int key,int s,int e)
{
    while(s<=e)
    {
       int mid;
       mid=(s+e)/2;
       if(arr[mid]==key)
       {
        return mid;
       }
       else if(arr[mid]<key)
       {
        s = mid+1;
       }
       else{
        e=mid-1;
       }
    }
    return -1;
}
int main()
{
    int key = 5;
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5,6};

    cout << bs(arr, 4, 0 ,6);
return 0;
}
