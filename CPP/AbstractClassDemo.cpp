#include<iostream>
#include<cmath>
using namespace std;

class shape         //Abstract Class
{
public:
    const float PI=3.14;

    virtual void input() = 0;       //pure virtual function
    virtual float area() = 0;       //pure virtual function
};

class circle : public shape
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

class rectangle : public shape
{
    float ln, br;
public:
    void input()
    {
        cout<<"Enter length: ";
        cin>>ln;
        cout<<"Enter breadth: ";
        cin>>br;
    }
    float area()
    {
        return ln * br;
    }

};

class triangle : public shape
{
    float a, b, c, s;
public:
    void input()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
        cout<<"Enter the value of c: ";
        cin>>c;
    }
    float area()            //Overriding area()
    {
        s = (a + b + c)/2;
        return sqrt(s*((s-a) * (s-b) * (s-c)));      //Herons Formula
    }
};

int main()
{
    shape *s;
    s = new circle();
    s->input();
    cout<<"The area of circle is "<<s->area()<<endl;

    s = new rectangle();
    s->input();
    cout<<"The area of rectange is "<<s->area()<<endl;

    s = new triangle();
    s->input();
    cout<<"The area of triangle is "<<s->area()<<endl;

    return 0;
}