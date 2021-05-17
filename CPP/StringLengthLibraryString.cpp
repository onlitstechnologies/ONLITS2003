#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"The length of "<<str<<" is "<<str.length()<<" characters."<<endl;
    return 0;
}
