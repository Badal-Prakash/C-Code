 #include<bits/stdc++.h>
 using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp;
        int right=0;
        int left=0;
        while(left<=m&&right<=n){
            if(nums1[left]<nums2[right]){
            temp.push_back(nums1[left]);
            left++;
            }
            else
            {
                temp.push_back(nums2[right]);
            right++;
            }

        }
        while(left<=m)
        {
            temp.push_back(nums1[left]);
            left++;

        }
        while(right<=n)
        {
             temp.push_back(nums2[right]);
            right++;
        }
        nums1=temp;
        // for(int x:temp)
        // {
        //     num1=
        // }

    }
int main()
{
    vector<int> arr1{1,2,3};
    vector<int>arr2{2,5,6};
    // merge()
    
    return 0;
}