#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<vector<int>> generate(int row)
    {
        vector<vector<int>>r(row);
        for(int i=0;i<row;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
    return r;
    }
};
int main()
{
   solution g1;
   

    
    
    return 0;
}