#include <iostream> 
using namespace std;
bool found(int arr[],int n ,int key)
{
    if(n==0)
    {
        return false;
    }
   
    if(arr[0]==key)
     {
            return true;
     }
     
    else
    {
        bool ans = found(arr+1,n-1,key);
        return ans;
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    int key=1;
    //  for(int i=0;i<5;i++)
    //  {
    //     if(a[i]==key)
    //     {
    //         cout<<"found";
    //         break;
    //     }
    //  }
     int l=found(a,5,key);
     if(l==1)
     {
        cout<<"found";
     }
     else{
        cout<<"not found";
     }


return 0;
}
