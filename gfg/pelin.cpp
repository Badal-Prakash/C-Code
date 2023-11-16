#include <iostream>
using namespace std;
int peli(int n)
{
    int temp=n;
    int rev=0;
    while(temp!=0)
    {
        rev=rev*10+(temp%10);
        temp/=10;
    }
    return(rev==n);
}
int main()
{
    int n=101;
    if(peli(n)==1)
    {
        cout<<"pelindrom";
    }
    else{
        cout<<"not pelindrome";
    }
return 0;
}
