#include<bits/stdc++.h>
using namespace std;
class Human
{
protected:
    int height;
public:
    int weight;
private:
    int age;

public:
    int getage()
    {
        return this->age;
    }

    void setweight(int w)
    {
        this->weight = w;
    }

};

class Male:private Human
{
public:
    string color;

    void sleep()
    {
        cout<<"Male sleeping"<<endl;
    }

    int getheight()
    {
        return this->height;
    }
};
int main()
{
    Male object2;
    //cout<<object2.age<<endl;
    //cout<<object2.height()<<endl;
    cout<<object2.getheight()<<endl;

    return 0;
}
