#include <iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a={1,2,3,4,5};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<a.at(2)<<endl;
     cout<<a.at(3)<<endl;
      cout<<a.at(4)<<endl;
      cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
     cout<<a.back()<<endl;
return 0;
}
