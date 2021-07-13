#include<iostream>
#include<cmath>
using namespace std;

class shape         //Abstract Class
{
public:
    const float PI = 3.14F;            //Constant   

    virtual void input() = 0;       //pure virtual function (abstract)
    virtual float area() = 0;       //pure virtual function (abstract)
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
        return (float) sqrt(s*((s-a) * (s-b) * (s-c)));      //Herons Formula
    }
};

int main()
{
    shape *s;
    s = new circle();
    s->input();                 //Runtime Polymorphism
    cout<<"The area of circle is "<<s->area()<<endl;        //Runtime Polymorphism

    s = new rectangle();
    s->input();                 //Runtime Polymorphism
    cout<<"The area of rectange is "<<s->area()<<endl;      //Runtime Polymorphism

    s = new triangle();
    s->input();                 //Runtime Polymorphism
    cout<<"The area of triangle is "<<s->area()<<endl;      //Runtime Polymorphism

    return 0;
}