#include<iostream>

using namespace std;

class student
{
	int rollno;
	string name;
	
public:
	student()		//Constructor
	{
		cout<<"Enter roll no: ";
		cin>>rollno;
		cout<<"Enter Name: ";
		getchar();
		getline(cin,name);	//scanf("%[^\n]
	}
	~student()		//Destructor
	{
		cout<<"Roll No: "<<rollno<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

int main()
{
	student s1, s2, s3;
	
	return 0;
	
}
