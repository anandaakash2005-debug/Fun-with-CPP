#include<bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

 public:
    char level;
    char *name;
    static int timeTocompleate;

    int gethealth()
    {
        return health;
    }

    hero()
    {
        cout<<"default/simple constructer call"<<endl;
        name=new char[100];
    }

    //parameter constructer
    hero(int health,char level)
    {
        this->level=level;
        this->health=health;
    }

    void print()
    {
        cout<<"Name:"<<this->name<<endl;
        cout<<"level: "<<this->level<<endl;
        cout<<"health:"<<this->health<<endl;

    }

    hero(int health)
    {
        cout<<"this->"<<this<<endl;
    }

    hero(hero& temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"Copy constructure called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
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

    void setname(char name[])
    {
        strcpy(this->name,name);
    }

    static int random()
    {
        return timeTocompleate;
    }

    ~hero()
    {
        cout<<"Destructure bhai called: "<<endl;
    }
};

int hero::timeTocompleate=5;

int main()
{
  //cout<<hero::timeTocompleate<<endl;

  cout<<hero::random()<<endl;

  /*hero a;
  cout<<a.timeTocompleate<<endl;

  hero b;
  b.timeTocompleate=10;
  cout<<a.timeTocompleate<<endl;
  cout<<b.timeTocompleate<<endl;*/

    return 0;
}
