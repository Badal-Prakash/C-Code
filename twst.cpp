#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N;
	    cin>>N;
        int a[1000];
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0;
	     for(int i=0;i<N;i++)
	     {
	          if(a[i]%2!=0)
	    {
	        count++;
	    }
	         
	     }
	     cout<<count<<endl;
	   
	}
	return 0;
}

