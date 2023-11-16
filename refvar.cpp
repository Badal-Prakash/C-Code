#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &j =a;
    cout<<a<<"  "<<j<<endl;
    a++;
    cout<<a<<"  "<<j<<endl;
    j++;
     cout<<a<<"  "<<j<<endl;

return 0;
}
