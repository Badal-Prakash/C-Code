#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set<int ,greater<int> >s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    // for(int x:s)
    // {
    //     cout<<x<<" ";
    // }
//     set<int>::iterator it=s.begin();
//     for(it=s.begin();it!=s.end();it++)
// {
//     cout<<*it<<" ";
// }   
//    for(it=s.rbegin();it!=s.rend();it++)
// {
//     cout<<*it<<" ";
// }   
auto it=s.find(10);
if(it==s.end())
{
    cout<<"not found";
}
else{
    cout<<"found";
}
while(it!=s.end())
{
    cout<<*it<<" ";
    it++;
}
    
    return 0;
}