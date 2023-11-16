#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v;
    cout<<"size-->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size-->"<<v.capacity(); 
       v.push_back(2);
    cout<<"size-->"<<v.capacity();
       v.push_back(3);
    cout<<"size-->"<<v.capacity();
       v.push_back(4);
    cout<<"size-->"<<v.capacity();
       v.push_back(5);
    cout<<"size-->"<<v.capacity();
      cout<<"size-->"<<v.size ()<<endl;
      cout<<v.at(2)<<endl;
      cout<<"before pop"<<endl;
      for(int i:v)
      {
        cout<<i<<" ";
      }cout<<endl;
    v.pop_back();
    cout<<"before pop"<<endl;
      for(int i:v)
      {
        cout<<i<<" ";
      }

return 0;
}
