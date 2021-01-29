import java.util.*;

class BankAccount {
	private String depositor_name;
	private String account_number;
	private String account_type;
	private float balance;


	void menu() {
		Scanner scan = new Scanner(System.in);
		int ch;
		System.out.println("--------------------------------");
		System.out.println("SERVICES MENU");
		System.out.println("--------------------------------");
		System.out.println("1. Deposit Amount");
		System.out.println("2. Withdraw Amount");
		System.out.println("3. Display Balance");
		System.out.println("4. Quit");
		System.out.print("Enter choice: ");
		ch = scan.nextInt();
	
		switch(ch) {
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
				break;
			default:
				System.out.println("Invalid option!");
				menu();
		}
	
	}
	void init() {
		depositor_name = "Shiva Kashyap";
		account_number = "1234";				
		account_type = "SA";		
		balance = 5000.00F;
	}

	void deposit() {
		Scanner scan = new Scanner(System.in);
		float amount;
		System.out.print("Enter amount to deposit: ");
		amount = scan.nextFloat();
		balance += amount;
		System.out.println("Transaction Successful!");
	}

	void withdraw() {
		Scanner scan = new Scanner(System.in);
		float amount;
		System.out.print("Enter amount to withdraw: ");
		amount = scan.nextFloat();
	
		if(amount<=balance) {
			balance -= amount;
			System.out.println("Transaction Successful!");
		}
		else {
			System.out.println("Transaction declined!");
		}
	}

	void display() {
		System.out.println("--------------------------------");
		System.out.println("Account Details");
		System.out.println("--------------------------------");
		System.out.println("Depositor Name: " + depositor_name);
		System.out.println("Balance: " + balance);
		System.out.println("--------------------------------");
	}

	public static void main(String[] args) {
		BankAccount ac = new BankAccount();
		ac.init();
		ac.menu();
	}
}
/*
	
*/
