#include<iostream>
#include<cstring>

using namespace std;

class bank_account
{
private:
	char depositor_name[30];
	char account_number[5];
	char account_type[3];
	float balance;
public:
	void init();
	void deposit();
	void withdraw();
	void display();
};

void bank_account :: init()
{
	strcpy(depositor_name, "Shiva Kashyap");
	strcpy(account_number, "1234");
	strcpy(account_type, "SA");
	balance = 5000.00F;
}

void bank_account :: display()
{
	cout<<endl<<"--------------------------------"<<endl;
	cout<<"Account Details"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Depositor Name: "<<depositor_name<<endl;
	cout<<"Balance: "<<balance<<endl;
	cout<<"--------------------------------"<<endl;
}

int main()
{
	bank_account ac;
	ac.init();
	ac.display();
	return 0;
}

/*
	:: is know as scope resolution operator
*/
