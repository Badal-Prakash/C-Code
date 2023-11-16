#include <iostream>
using namespace std;
int fact(int n)
{
    int l=1;
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        l =n*fact(n-1);
    }
    return l;
}
int main()
{
    int p,l;
    cout<<"enter the number";
    cin>>p;
    l= fact(p);
    cout<<l;
 return 0;
}
