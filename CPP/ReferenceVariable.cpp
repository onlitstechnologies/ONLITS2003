#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20, c;
    int &x = a, &y = b, &z = c;
    z = x + y;
    cout<<"The sum is "<<z<<endl;
    return 0;
}