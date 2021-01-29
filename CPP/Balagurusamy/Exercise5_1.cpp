#include<iostream>

using namespace std;

class bank_account
{
private:
	string depositor_name;
	string account_number;
	string account_type;
	float balance;
public:
	void menu();
	void init();
	void deposit();
	void withdraw();
	void display();
};

void bank_account :: menu()
{
	int ch;
	cout<<endl<<"--------------------------------"<<endl;
	cout<<"SERVICES MENU"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"1. Deposit Amount"<<endl;
	cout<<"2. Withdraw Amount"<<endl;
	cout<<"3. Display Balance"<<endl;
	cout<<"4. Quit"<<endl;
	cout<<"Enter choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			deposit();
			menu();
			break;
		case 2:
			withdraw();
			menu();
			break;
		case 3:
			display();
			menu();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"Invalid option!"<<endl;
			menu();
	}
	
}
void bank_account :: init()
{
	depositor_name = "Shiva Kashyap";
	account_number = "1234";
	account_type = "SA";
	balance = 5000.00F;
}

void bank_account :: deposit()
{
	float amount;
	cout<<"Enter amount to deposit: ";
	cin>>amount;
	balance += amount;
	cout<<"Transaction Successful!"<<endl;
}

void bank_account :: withdraw()
{
	float amount;
	cout<<"Enter amount to withdraw: ";
	cin>>amount;
	
	if(amount<=balance)
	{
		balance -= amount;
		cout<<"Transaction Successful!"<<endl;
	}
	else
	{
		cout<<"Transaction declined!"<<endl;
	}
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
	ac.menu();
	return 0;
}

/*
	:: is know as scope resolution operator
*/
