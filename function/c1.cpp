#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
	for(int i=0;i<T;i++)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    float l=float((A+B)/2);
	    cout<<l;
	    if(l>C){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
