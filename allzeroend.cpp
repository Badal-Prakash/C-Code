#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,0,2,0,0,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<temp.size();i++)
    {
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}