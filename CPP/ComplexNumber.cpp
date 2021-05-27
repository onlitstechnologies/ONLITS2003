#include<iostream>
using namespace std;

class complex
{
    float real;
    float imag;
public:
    void display(complex p);
    complex(float x, float y);      //constructor
};

complex :: complex(float x, float y)
{
    real = x;
    imag = y;
}

void complex :: display(complex p)
{
    cout<<"real: "<<p.real<<endl;
    cout<<"imag: "<<p.imag<<endl;
}

int main()
{
    complex c(10.3F, 20.6F);
}