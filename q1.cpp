#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pro=1;
    int sum =0;
    while(n!=0)
    {
        int digit=n%10;
        pro=pro*digit;
        sum=sum+digit;
        n =n/10;
    }
     int result=pro-sum;
     cout<<result<<endl;
     
return 0;
}
