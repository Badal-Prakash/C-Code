#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    int l=(A+B)/2;
	     int m=(A+C)/2;
	      int n=(C+B)/2;
	      if(l<35||m<35||n<35)
	      {
	          cout<<"fail";
	      }
	      else
	      {
	          cout<<"pass";
	      }
	    
	}
	return 0;
}
