#include <iostream>
using namespace std;
void reached(int src,int dest)
{
    if(src==dest)
    {
        cout<<"reached"<<endl;
    }
    else{
        src++;
        reached(src,dest);
    }

}
int main()
{
    int src=1;
    int dest=100;
    reached(src,dest);
return 0;
}
