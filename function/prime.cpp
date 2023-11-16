#include <iostream>
using namespace std;
void prime(int n)
{
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n/i==0)
        {
            isprime=0;
            break;

        }

    }
    if(isprime==0)
    {
        cout<<"not a prime no";
    }
    else{
        cout<<"prime no";
    }
}
int main()
{
    int x;
    cin>>x;
    prime(x);
return 0;
}
