#include <iostream>
using namespace std;
bool found(int a[][3],int t,int r,int c)
{
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(a[i][j]==t)
           {
            return 1;
           }
        }
        cout<<endl;
        
    }
    return 0;
}
int main()
{
    int arr[100][100];
    cout<<"enter the size of row and column";
    int row,col;
    
    cin>>row>>col;
    cout<<"enter the size of row and column";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
           
        }
        
    }
    // cout<<"enter the size of row and column"<<endl;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    // int sum=0;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //        sum = sum+arr[i][j];
    //     }
    //     cout<<endl;
        
    // }
    // cout<<sum;
    if(found(arr,1,3,3))
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}
