#include <iostream>
using namespace std;
bool prime(int n)
{
    if(n<2)
    {
        return false;
    }
      for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(!prime(n))
    
    {
        cout<<"not a prime  no"<<endl;
    }
    else{
        cout<<"prime no"<<endl;
    }
return 0;
}
