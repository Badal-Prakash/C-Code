#include<bits/stdc++.h>
using namespace std;
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>ans;
        sort(arr,arr+n,greater<int>());
	    for(int i=0;i<k;i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
int main()
{
    int arr[5]={1,2,3,4,5};

    vector<int> ans=kLargest(arr,5,3);
    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}