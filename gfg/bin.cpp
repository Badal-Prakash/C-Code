#include <iostream>
using namespace std;
int main()
{
    int n=1010;
    int val=0;
    int base=1;
    while(n>0)
    {
        int lastdigit=n%10;
        val=val+lastdigit*base;
        n=n/10;
        base=base*2;
    }
    cout<<val;
return 0;
}
