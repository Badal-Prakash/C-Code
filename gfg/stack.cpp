#include<bits/stdc++.h>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

};
int main()
{
    stack(10);
    
    return 0;
}