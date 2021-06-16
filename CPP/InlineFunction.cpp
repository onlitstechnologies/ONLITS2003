#include<iostream>
inline int sq(int n);
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The square of "<<n<<" is "<<sq(n)<<endl;
    return 0;
}

inline int sq(int n)
{
    return n*n;
}