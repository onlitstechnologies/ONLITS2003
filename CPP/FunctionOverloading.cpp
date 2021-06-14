#include<iostream>
using namespace std;
int sum(int a, int b);
float sum(float a, float b);
int main()
{
    cout<<"Sum of 10 and 20 is "<<sum(10,20)<<endl;
    cout<<"Sum of 15.7 and 39.3 is "<<sum(15.7F, 39.3F)<<endl;
}

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

/* This program demonstrates the feature of function overloading in C++. */