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
        cout<<"default constructer call"<<endl;
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
};
int main()
{
   hero Hero1;
   Hero1.sethealth(56);
   Hero1.setlevel('X');
   char name[6]="Akash";
   Hero1.setname(name);
   Hero1.print();

   //use default copy constructure
   hero Hero2(Hero1);
   Hero2.print();

   Hero1.name[0]='G';
   Hero1.print();
   Hero2.print();

    return 0;
}
