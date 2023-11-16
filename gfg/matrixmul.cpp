#include <iostream>
using namespace std;
int main()
{
    int m=3,n=3,p=3,q=3;
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3];
    if(n!=p)
    {
        cout<<"matrix multiplication  not possible";
    }
    else{
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                result[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                result[i][j]+=arr1[i][k]+arr2[k][j];
            }
        }
    
    }

  for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    

return 0;
}
