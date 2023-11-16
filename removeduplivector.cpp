#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findKthLargest(vector<int>& nums, int k)
{
    
  nums.erase(unique(nums.begin(), nums.end()),
      nums.end());
sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
}
int main()
{
    int arr[10]={1,2,4,1,3,4,2,2,4,2};
   vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(arr[i]);
        
    }
    
    int n=v.size();
    cout<<findKthLargest(v,2)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}