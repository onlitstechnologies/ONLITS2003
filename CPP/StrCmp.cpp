#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ans[50];
    cout<<"Who is the father of C++?"<<endl;
    cin.getline(ans,50);
    if((ans, "Bjarne Stroustrup") == 0 || (ans, "bjarne stroustrup") == 0)
    {
        cout<<strcmp(ans,"Bjarne Stroustrup");
        cout<<"Very Good!"<<endl;
    }
    else
    {
        cout<<strcmp(ans,"Bjarne Stroustrup");
        cout<<"Very Poor!"<<endl;
    }
}