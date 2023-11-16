#include <iostream>
using namespace std;
void prime(int n)
{
    if(n==0||n==1)
    {
        cout<<"nethier prime nor no prime";
    }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"not prime";
                break;
            }
            cout<<"prime no";
        }
        
    }
}
int main()
{
    prime(21);
return 0;
}
