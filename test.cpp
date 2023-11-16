#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	
	 for(int i=0;i<T;i++)
	 {
		int l=0;
		int k;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			if(i%2!=0)
			{
				l=l+3;
			}
			else{
				l=l-1;
			}
		}
		
		cout<<l<<endl;
	 }
	
	return 0;
}
