#include<iostream>
using namespace std;

class shape         //Abstract Class
{
public:
    const float PI=3.14;

    virtual void input() = 0;       //pure virtual function
    virtual float area() = 0;       //pure virtual function
};

class circle : shape
{
    float rad;
public:
    void input()
    {
        cout<<"Enter radius: ";
        cin>>rad;
    }
    float area()
    {
        return PI * rad * rad;
    }
};

class rectange
{

};

class triangle
{

};

int main()
{
    circle *c = new circle();
    c->input();
    cout<<"The area of circle is "<<c->area()<<endl;
    return 0;
}