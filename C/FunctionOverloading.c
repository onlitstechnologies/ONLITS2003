#include<stdio.h>
int sum(int a, int b);
float sum(float a, float b);
int main()
{
    printf("Sum of 10 and 20 is %d.\n", sum(10,20));
    printf("Sum of 15.7 and 39.3 is %1.1f.\n", sum(15.7F, 39.3F));
}

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

/* This program proves that function overloading is not possible in C. */