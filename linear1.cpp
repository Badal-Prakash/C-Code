#include <iostream>
using namespace std;
bool isfound(int *arr,int n,int key)
{
    if(n==0);
    {
        return ;
    }
    
  
    if(n==1)
    {
      arr[0]==key;
      return true;  
    }
    else{
        return false;
    }
    
}
int main()
{
    int key=5;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
return 0;
}
