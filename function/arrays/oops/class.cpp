#include <iostream>
using namespace std;
class hero{
    public:
    char *name;
    
    int health;
    char level;
    hero(){
        name=new char[100];
        cout<<"or haal hai p"<<endl;

    }
    hero(int health)
    {
        cout<<this<<endl;
        this->health=health;
    }
     hero(int health, char level)
    {
        this->level=level;
        this->health=health;
    }
    // hero(hero& temp)
    // {
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
    void print()
    {
        cout<<level<<endl;
         cout<<health<<endl;
         cout<<name<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel( char l)
    { 
        level=l;
    }
    void setname( char name[])
    { 
        strcpy(this->name,name);
    }
};
int main()
{
   
   


    hero hero1;
    
    hero1.sethealth(100);
    hero1.setlevel('a');
    char name[10]="badal";
    hero1.setname(name);
    hero1.print();
    hero hero2(hero1);
    hero2.print();
    hero1.name[0]='l';
    hero1.print();
    hero2.print();


     // hero l(90,'a');
    // l.print();
    // hero m(l);
    // m.print();
     // hero ramesh(19);
    // cout<<&ramesh<<endl;
    // hero temp(19,'q');
    // temp.print(); 
    // hero *p=new hero(10);
    //dynamic allocation
    // hero *h=new hero;
    // cout<<sizeof(h)<<endl;
    // cout<<sizeof(hero)<<endl;
    // h->sethealth(90);
    // h->setlevel('a');
    // cout<<(*h).getlevel();
    // cout<<h->getlevel();
    // cout<<h->gethealth();
    //static allocation
    // hero h1;
    // h1.sethealth(70);
    // h1.setlevel('a');
    // cout<<sizeof(h1)<<endl;
    // cout<<h1.gethealth()<<endl;
    // cout<<h1.getlevel()<<endl;
return 0;
}
