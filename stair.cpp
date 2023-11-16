#include <iostream>
using namespace std;
int stair(int n)
{
    if(n<0)
    {
        return 0;

    }
    if(n==0)
    {
        return 1;

    }
    else{
        int ans=stair(n-1)+stair(n-2);
    return ans;
    }
}
int main()
{
    int n;
    cin>>n;
    int l=stair(n);
    cout<<l;
return 0;
}
