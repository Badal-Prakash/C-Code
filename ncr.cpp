// #include<bits/stdc++.h>
// using namespace std;
// // int ncr(int n,int r)
// // {
// //     long long res=1;
// //     for(int i=0;i<r;i++)
// //     {
// //         res=res*(n-i);
// //         res=res/(i+1);
// //     }
// //     return res;
// // }
// void pascal(int r)
// {
//     int ans=1;
//     cout<<ans<<" ";
//     for(int i=1;i<r;i++)
//     {
//         ans=ans*(r-i);
//         ans/=i;
//         cout<<ans<<" ";
//     }
// }
// int main()
// {
//     // cout<<ncr(3,2);
    
//     pascal(10 );
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
vector<int> generaterow(int row)
{
    vector<int>ansrow;
    long long ans=1;
    ansrow.push_back(1);
    for(int i=1;i<row;i++)
    {
        ans*=(row-i);
        ans/=i;
        ansrow.push_back(ans);
    }
    return ansrow;
    
}
vector<vector<int> > pascalTriangle(int N) {
    vector<vector<int> >ans;
    for(int i=1;i<=N;i++)
    {

    ans.push_back(generaterow(i));
    }
    return ans;
}
int main()
{
    vector<vector<int> >ans=
    pascalTriangle(5);
    for(auto x:ans)
    {
        for(auto ete:x)
        {
            cout<<ete<<" ";
        }
        cout<<endl;
    }
    return 0;
}