#include<iostream>
using namespace std;
class student
{
protected:
    int adm_no;
    string name;
    char gender;
    string dob;
public:
    void new_student();
    void display();
};

void student :: new_student()
{
    cout<<"Enter admission number: ";
    cin>>adm_no;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter gender: ";
    cin>>gender;
    cout<<"Enter date of birth: ";
    cin>>dob;
}

void student::display()
{
    cout<<"Admission number: "<<adm_no<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Date of birth: "<<dob<<endl;
}

class ba : student
{
    string excursion;
public:
    void new_student_ba();
    void display_ba();
};

void ba::new_student_ba()
{
    new_student();
    cout<<"Enter excursion details: ";
    cin>>excursion;
}

void ba::display_ba()
{
    display();
    cout<<"Excursion details: "<<excursion<<endl;
}

class bcom : student
{
    string internship;
public:
    void new_student_bcom();
    void display_bcom();
};

void bcom::new_student_bcom()
{
    new_student();
    cout<<"Enter internship details: ";
    cin>>internship;
}

void bcom::display_bcom()
{
    display();
    cout<<"Internship details: "<<internship<<endl;
}

class bsc : student
{
    string project;
public:
    void new_student_bsc();
    void display_bsc();
};

void bsc::new_student_bsc()
{
    new_student();
    cout<<"Enter project details: ";
    cin>>project;
}

void bsc::display_bsc()
{
    display();
    cout<<"Project details: "<<project<<endl;
}

int main()
{
    ba s1;
    s1.new_student_ba();
    s1.display_ba();
    return 0;
}