#include <iostream>
using namespace std;
bool bsearch(int *arr,int i,int e,int key)
{
  if(i>e)
  {
    return false;
  }
  int mid=(i+(e-i)/2);
  if(arr[mid]==key)
  {
    return true;
  }
  if(arr[mid]>key)
  {
    return bsearch(arr,i,mid-1,key);

  }
  else{
    return bsearch(arr,mid+1,e,key);
  }
}
int main()
{
  int arr[5]={1,2,3,4,5};
  int l=bsearch(arr,0,4,1);
  if(l==1)
  {
    cout<<"found";
  }
  else{
    cout<<"not found";
  }
return 0;
}
