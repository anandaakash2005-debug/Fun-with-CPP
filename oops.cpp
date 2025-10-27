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

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void sethealth(char ch)
    {
        level=ch;
    }
};
int main()
{
   hero h1;
   //h1.health=70;
   h1.level='A';

   cout<<"Ramesh health: "<<h1.gethealth()<<endl;
   h1.sethealth(70);


   // cout<<"Health is: "<<h1.health<<endl;
    cout<<"Level is: "<<h1.level<<endl;
    cout<<"health is: "<<h1.gethealth()<<endl;

    return 0;
}
