#include<bits/stdc++.h>
using namespace std;
//compile Time polymorphism
//funcn overloading
class A
{
public:
    void sayHello()
    {
        cout<<"Hello Akash"<<endl;
    }
    int sayHello(char x)
    {
        cout<<"Akash Babu"<<x<<endl;
        return x;
    }
    void sayHello(string name)
    {
        cout<<"Hello "<<name<<endl;
    }
};

//operator overloading
class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a+b;
    }

    void operator+(B &obj)
    {
        /*int value1=this->a;//obj1.a
        int value2=obj.a;//obj2.a
        cout<<"output "<<value2-value1<<endl;*/

        cout<<"Hello Akash"<<endl;
    }

    void operator()()
    {
        cout<<"Main DON hu "<<this->a<<endl;
    }
};

//run Time polymorphism
class Animal
{
public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};
class Dog:public Animal
{
public:
    void speak()
    {
        cout<<"barking"<<endl;
    }
};
int main()
{
   /*A obj;

   obj.sayHello();
   obj.sayHello('A');
   obj.sayHello("Akash bdsk");*/

   /*B obj1,obj2;

   obj1.a=4;
   obj2.a=7;

   obj1+obj2;    //obj1.operator+(obj2);

   obj1();*/


   Dog obj;
   obj.speak();

    return 0;
}
