#include <iostream>
using namespace std;
int power(int x,unsigned int n)
{
    if(n==0)
    {
        return 1;
    }
    int temp;
    temp=power(x,n/2);
    if(n%2==0)
    {
        return temp*temp;
    }
    else{
        return x*temp*temp;
    }
}
int main()
{
    cout<<power(2,5);
return 0;
}
