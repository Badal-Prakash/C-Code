#include <iostream>
using namespace std;
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int ncr(int a,int b)
{
    int num = fact(a);
    int den= fact(b)*fact(b-a);
    int ans = num/den;
    return ans;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int a=ncr(x,y);
   cout<<a;

}
