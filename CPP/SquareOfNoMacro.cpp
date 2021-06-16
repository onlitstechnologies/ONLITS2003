#include<iostream>
#define SQ(N) N*N               //macro
int sq(int n);
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The square of "<<n<<" is "<<SQ(n)<<endl;
    return 0;
}