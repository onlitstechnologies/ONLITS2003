#include<iostream>
using namespace std;
class A     //Parent/Base
{
protected:
    int a;
public:
    A() {}
    A(int x)
    {
        a = x;
    }
    void display_a()
    {
        cout<<"a = "<<a<<endl;
    }
};

//Inheritance
class B : public A          //Child/Derived          
{
    int b;
public:
    B() {}
    B(int x)
    {
        b = x;
    }
    B(int x, int y)
    {   
        a = x;
        b = y;
    }
    void display_b()
    {
        cout<<"b = "<<b<<endl;
    }
    void display_ab()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};


int main()
{
    B obb(10, 20);
    
    obb.display_ab();

    return 0;
}