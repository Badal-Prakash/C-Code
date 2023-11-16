#include <iostream>
using namespace std;
int main()
{
    int count=0;
    char name[100];
    cin>>name;
    cout<<name<<endl;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;
return 0;
}
