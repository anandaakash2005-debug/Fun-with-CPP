#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
    void getage(int a)
    {
        this->age = a;
        cout<<this->age<<endl;
    }
};

class dog:public animal
{

};

class shepherd:public dog
{

};

int main()
{
    shepherd d;
    d.speak();

   d.getage(20);

    return 0;
}
