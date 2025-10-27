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
        cout<<"default constructer call"<<endl;
    }

    //parameter constructer
    hero(int health,char level)
    {
        this->level=level;
        this->health=health;
    }

    void print()
    {
        cout<<level<<endl;
        cout<<health<<endl;
    }

    hero(int health)
    {
        cout<<"this->"<<this<<endl;
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
   hero ramesh(10);
  // cout<<"address of ramesh: "<<&ramesh<<endl;
   hero a;


   hero temp(22,'B');
  // temp.print();

   hero*h=new hero(11,'c');
   //h->print();

    return 0;
}
