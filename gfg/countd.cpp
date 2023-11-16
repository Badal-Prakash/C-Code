#include <iostream>
using namespace std;
int countfun(int n)
{
    int count=0;
    int rev=0;
    int digit;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        count++;
        n/=10;
    }
    cout<<rev<<endl;
    return count;
}
int main()
{
    cout<<countfun(1234);

return 0;
}
