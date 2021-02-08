#include<iostream>

using namespace std;

struct student
{
	int rollno;
	string name;
	
	void input()
	{
		cout<<"Enter roll no: ";
		cin>>rollno;
		cout<<"Enter Name: ";
		getchar();
		getline(cin,name);	//scanf("%[^\n]
	}
	void display()
	{
		cout<<"Roll No: "<<rollno<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

int main()
{
	struct student s1;
	
	s1.input();
	s1.display();
	
	return 0;
	
}
