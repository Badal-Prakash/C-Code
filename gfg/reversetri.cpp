#include <iostream>
using namespace std;
int main()
{
   int m=3,n=3;
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    for(int i=0;i<m;i++)
//    {
//     for(int j=0;j<n;j++)
//     {
//         if(i==j)
//         {
           
//         }
//         else{

//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp; 
//         }
//     }
   //}
    for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
       cout<<arr[j][i]<<" ";
    }
    cout<<endl;
   }
return 0;
}
