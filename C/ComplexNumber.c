#include<stdio.h>
struct complex
{
    float real;
    float imag;
};

struct complex input(float x, float y);
void display(struct complex p);

int main()
{
    struct complex c = {10.3, 20.6};                    //structure initialization
    printf("Displaying for the first time:\n");
    display(c);
    c = input(12.5F, 15.5F);
    printf("Displaying after input():\n");
    display(c);
}

struct complex input(float x, float y)
{
    struct complex r;            
    r.real = x;
    r.imag = y;
    return r;
}

void display(struct complex p)
{     
    printf("real: %.1f\n", p.real);
    printf("imag: %.1f\n", p.imag);
}

/*
    Add two complex numbers
*/