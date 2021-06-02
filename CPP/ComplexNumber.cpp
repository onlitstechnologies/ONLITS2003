#include<iostream>
using namespace std;

class complex                       //User defined data type
{
    float real;
    float imag;
public:
    complex();                      //default constructor
    complex(float x, float y);      //parameterized constructor
    void input(float x, float y);
    void display();
    complex add(complex p);
    complex operator+(complex p);
};

complex :: complex()
{
    real = 0.0F;
    imag = 0.0F;
}

complex :: complex(float x, float y)     //parameterized constructor
{
    real = x;
    imag = y;
}

void complex :: input(float x, float y)
{
    this->real = x;
    imag = y;
}

void complex :: display()
{
    cout<<"real: "<<this->real<<endl;
    cout<<"imag: "<<this->imag<<endl;
}

complex complex :: add(complex p)
{
    complex t;                  //object created statically
    t.real = real + p.real;
    t.imag = imag + p.imag;
    return t;
}

complex complex :: operator+(complex p)     //Operator Overloading
{
    complex t;                  //object created statically
    t.real = real + p.real;
    t.imag = imag + p.imag;
    return t;
}

int main()
{
    complex c1(10.3F, 20.6F);
    complex c2(25.6F,99.7F); 
    complex c3;
    complex *c = new complex(15.3F, 17.3F);
    //c3 = c1.add(c2);
    c3 = c1 + c2;           //possible via operator overloading
    c1.display();           //this is c1
    c2.display();           //this is c2
    c3.display();           //this has the address of c3
    c->display();           //pointer to object (dynamic object)
    return 0;
}

/*
    Class is the recipe -   
    Object it the dish  -   Samosa
*/