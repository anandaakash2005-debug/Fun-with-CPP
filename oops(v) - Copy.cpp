#include<bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

 public:
    char level;
    char *name;

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

    ~hero()
    {
        cout<<"Destructure bhai called: "<<endl;
    }
};
int main()
{
  //static
  hero Hero;

  //dynamic
  hero *x=new hero();
  //manually destructure call
  delete x;

    return 0;
}
