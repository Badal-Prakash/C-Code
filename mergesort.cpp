#include <iostream>
using namespace std;
void merge(int *arr,int i,int e)
{
    int mid=(i+e)/2;
    int len1=mid-i+1;
    int len2= e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    //copy value
    int mainarrayindex=i;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainarrayindex++];
    }
    //merge to sorted array
    int index1=0;
    int index2=0;
    mainarrayindex=i;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2])
        {
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second [index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[mainarrayindex++]=second [index2++];
    }
}   
void mergesort(int *arr,int i,int e)
{
    
    if(i>=e)
    {
        return ;

        
    }
     int mid=(i+e)/2;

     mergesort(arr,i,mid);
     mergesort(arr,mid+1,e);
     merge(arr,i,e);
}
int main()
{
    int arr[5]={1,4,2,5,3};
    int n=5;
    
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}
