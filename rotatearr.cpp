#include<bits/stdc++.h>
using namespace std;
// void rotate(vector<int>& nums, int k) {
//         int n=nums.size()-1;
//         vector<int>temp;
//         k=k%n;
//         for(int i=0;i<k-1;i++)
//         {
//             temp.push_back(nums[i]);
//         }
//         for(int i=k;i<n;i++)
//         {
//             nums[i-k]=nums[i];
//         }
//         for(int i=n-k;i<n;i++)
//         {
//             nums[i]=temp[i-(n-k)];

//         }
//     }
int main()
{
    vector<int>v;
    for(int i=0;i<7;i++)
    {
        v.push_back(i+1);
    }
  
   for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
    reverse(v.begin(),v.begin()+3);
    // rotate(v,3);
cout<<endl;
     for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}