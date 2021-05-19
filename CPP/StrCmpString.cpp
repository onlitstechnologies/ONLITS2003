/*
    Program to compare two strings store in char array.
*/

#include<iostream>
using namespace std;
int main()
{
    string ans;
    cout<<"Who is the father of C++?"<<endl;
    getline(cin, ans);
    if(ans == "Bjarne Stroustrup" || ans == "bjarne stroustrup"  || ans == "BJARNE STROUSTRUP")
    {
        cout<<"Very Good!"<<endl;
    }
    else
    {
        cout<<"Very Poor!"<<endl;
    }
}

/* here ans is objece */