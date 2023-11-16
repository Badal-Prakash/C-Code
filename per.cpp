#include<bits/stdc++.h>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    int n1=sizeof(input1)/sizeof(input1[0]);
    int n2=sizeof(input2)/sizeof(input2[0]);
    if(n1!=n2)
    {
        return false;
    }
    sort(input1,input1+n1);
    sort(input2,input2+n2);
    for(int i=0;i<n1;i++)
    {
        if(input1[i]!=input2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr1[]={'a','b','c','d'};
    char arr2[]={'a','b','c','d'};

    cout<<isPermutation(arr1,arr2);
    
    return 0;
}