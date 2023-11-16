
#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    int id;
    int exp;
    employee(string name,int id,int exp) 
    {
        this->name=name;
        this->id=id;
        this->exp=exp;
    }
    void print()
    {
        cout<<this->name<<" "<<this->id<<" "<<this->exp;
    }
};
int main()
{
    employee emp("badal",121,1);
    emp.print();
return 0;
}
