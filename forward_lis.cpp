#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    pair<string,int> p=make_pair("badal",1);
    m.insert(p);
    pair<string,int>p2("prakash",2);
    m.insert(p2);
    m["narayan"]=3;
    cout<<m["prakash"]<<endl;
    // cout<<m["lav"]<<endl;
    cout<<m.at("prakash")<<endl;
    // cout<<m.at("lav")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("hello")<<endl;
    cout<<m.count("badal")<<endl;
    // m.erase("badal");
    // cout<<m.size()<<endl;
    // for(auto x:m)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;

}