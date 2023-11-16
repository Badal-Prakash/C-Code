#include <iostream>
using namespace std;
int main()
{
    char ch='q';
    int l = sizeof(ch);
    cout<<l<<endl;
    char *h=&ch;
    cout<<sizeof(h);
    int *arr= new int[5];
    cout<<sizeof(arr);
return 0;
}
