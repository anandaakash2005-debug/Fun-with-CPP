#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void func()
    {
        cout<<"I am A"<<endl;
    }
};

class B
{
public:
    void func()
    {
        cout<<"I am B"<<endl;
    }
};

class c:public A,public B
{

};

int main()
{
   c obj;
   //obj.func();

   obj.A::func();
   obj.B::func();

    return 0;
}
