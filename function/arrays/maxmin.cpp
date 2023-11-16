#include <iostream>
using namespace std;
int getmin(int a[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
int getmax(int a[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l =getmax(a,n);
    cout<<l<<endl;
    int m =getmin(a,n);
    cout<<m<<endl;

return 0;
}
