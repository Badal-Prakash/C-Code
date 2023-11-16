#include <iostream>
using namespace std;
void count(int n)
{
    for(int i=1;i<=10;i++)
    {
        int l=n*i;
        cout<<l<<endl;
    }
}
int main()
{
    int n ;
    cin>>n;
    count(n);
    
return 0;
}
