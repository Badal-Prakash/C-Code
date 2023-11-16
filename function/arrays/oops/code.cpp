#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int arr[1000];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int i=1;i<N;i++)
        {
            if(arr[0]==arr[i])
            {
               
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
