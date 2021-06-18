#include <iostream>
using namespace std;
float si(float p, float r, float t = 1);
int main()
{
    float p, r, t;
    cout<<"Enter principal: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    //cout<<"Enter time: ";
    //cin>>t;
    cout<<"Simple Interest: "<<si(p, r)<<endl;
    return 0;
}

float si(float p, float r, float t)
{
    return (p * r * t) / 100;
}