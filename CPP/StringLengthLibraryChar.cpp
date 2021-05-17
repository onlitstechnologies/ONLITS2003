#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[30];
    cout<<"Enter a string: ";
    cin.getline(str, 30);
    cout<<"The length of "<<str<<" is "<<strlen(str)<<" characters."<<endl;
    return 0;
}
