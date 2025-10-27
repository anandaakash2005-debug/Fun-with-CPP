#include<bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

 public:
    char level;

    int gethealth()
    {
        return health;
    }

    hero()
    {
        cout<<"constructer call"<<endl;
    }

    //parameter constructer
    hero(int health)
    {
        cout<<"this->"<<this<<endl;
        this->health=health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(char ch)
    {
        level=ch;
    }
};
int main()
{
   //static allocation
   hero a;
   a.sethealth(70);
   a.setlevel('A');
   cout<<"Level is: "<<a.getlevel()<<endl;
   cout<<"Health is: "<<a.gethealth()<<endl;

   //object created statically
   hero ramesh(10);
   cout<<"Address of ramesh: "<<&a<<endl;

   //dinamically
   hero*b=new hero(11);
   b->setlevel('B');
   b->sethealth(90);
   cout<<"Level is: "<<b->getlevel()<<endl;
   cout<<"health is: "<<b->gethealth()<<endl;
    return 0;
}
