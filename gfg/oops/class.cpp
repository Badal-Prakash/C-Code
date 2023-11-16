#include <iostream>
using namespace std;
// class rectangle{
//     public:
//     int l;
//     int b;
//      int area()
//      {
//         return l*b;
//      }
//      int perimeter()
//      {
//         return 2*(l*b);
//      }
// };
class rectangle{
    private:
    int length;
    int breadth;
    
    public:
     int area()
     {
        return length*breadth;
     }
     int perimeter()
     {
        return 2*(length*breadth);
     }
     void setLenght(int l)
     {
        if(l>=0)
        {
        length=l;
        }
        else{
            length=0;
        }
     }
     void setBreadth(int b)
     {
        if(b>=0)
        {breadth=b;}
        else{
            breadth=0;
        }
     }
     int getLenght()
     {
        return length;
     }
    int getBreadth()
     {
        return breadth;
     }
     rectangle(){
        length=0;
        breadth=0;
    
    }
    rectangle(int l,int b)
    {
        setLenght(l);
        setBreadth(b);
    }
    rectangle(rectangle(&r2))
    {
        length=r2.length;
        breadth=r2.breadth;
    }
     
};
int main()
{
    //rectangel in stack
    // rectangle r1;
    // rectangle *ptr;
    // ptr=&r1;
    // ptr->l=10;
    // ptr->b=20;
    // cout<<ptr->area()<<endl;
    // cout<<ptr->perimeter();


    //rectangle object in heap;
//    rectangle *ptr=new rectangle();
//     ptr->l=10;
//     ptr->b=20;
//     cout<<ptr->area()<<endl;
//     cout<<ptr->perimeter();
// rectangle r1;
// r1.setBreadth(100);
// r1.setLenght(1000);
// cout<<r1.getBreadth()<<endl;
// cout<<r1.getLenght()<<endl;
// cout<<r1.area()<<endl<<r1.perimeter();
rectangle r1;
rectangle r2(100,200);
rectangle r3(r2);
cout<<r2.getBreadth()<<endl;
cout<<r2.getLenght()<<endl;
cout<<r2.area()<<endl<<r2.perimeter();
cout<<r3.getBreadth()<<endl;
cout<<r3.getLenght()<<endl;
cout<<r3.area()<<endl<<r3.perimeter();
return 0;
}
