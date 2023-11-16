#include <iostream>
using namespace std;
int power(int n)
{
    int l;
    if(n==0)
    {
        return 1;
    }
    else{
         l= 3*power(n-1);

    }
    return l;
}
int main()
{
    int n;
    cin>>n;
    int x=power(n);
    cout<<x;
return 0;
}
