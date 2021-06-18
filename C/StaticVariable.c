#include<stdio.h>
void test_static();
int main()
{
    int j;
    for(j=1; j<=5; j++)
    {
        test_static();
    }
    return 0;
}

void test_static()
{
    static int i;
    i++;
    printf("i=%d\n", i);
}