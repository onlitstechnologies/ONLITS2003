#include <iostream>
using namespace std;

int factorial(int &no);

int main()
{
    int n, f;
    cout << "Enter a number: ";
    cin >> n;
    f = factorial(n);
    cout << "Factorial of " << n << " is " << f << "." << endl;
    return 0;
}

int factorial(int &no)
{
    no++;
    int fact = 1;
    for (int i = no; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}