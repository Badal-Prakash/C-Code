#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    int x=min(a,b);
    int ans=1;
    for(int i=1;i<=x;i++ )
    {
        if(a%i==0&&b%i==0)
        {
            ans =i;
        }
    }
    return ans;
}
int lcm(int a,int b)
{
    return (a/gcd(a,b)*b);
}
int main()
{
    cout<<gcd(10,20)<<endl;
    cout<<lcm(10,20);

return 0;
}
