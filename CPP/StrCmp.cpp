/*
    Program to compare two strings store in char array.
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ans[50];
    cout<<"Who is the father of C++?"<<endl;
    cin.getline(ans,50);
    if(strcmp(ans, "Bjarne Stroustrup") == 0 || strcmp(ans, "bjarne stroustrup") == 0 || strcmp(ans, "BJARNE STROUSTRUP") == 0)
    {
        cout<<"Very Good!"<<endl;
    }
    else
    {
        cout<<"Very Poor!"<<endl;
    }
}