#include <iostream>
using namespace std;
bool even(int a)
{
    if(a%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int x;
    cin>>x;
  bool y= even(x);
    cout<<y;

}
