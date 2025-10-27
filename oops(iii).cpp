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
        cout<<"level: "<<this->level<<endl;
        cout<<"health:"<<this->health<<endl;
    }

    hero(int health)
    {
        cout<<"this->"<<this<<endl;
    }

    hero(hero& temp)
    {
        this->health=temp.health;
        this->level=temp.level;
        cout<<health<<endl;
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
   hero s(70,'B');
   s.print();
   //copy constructure
   hero r(s);
   r.print();

    return 0;
}
