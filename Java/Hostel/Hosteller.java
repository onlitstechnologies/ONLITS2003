import java.util.Scanner;
class Hosteller {
	int hid;
	String name;
	char gender;
	String dob;
	String contactno;
	
	void newHosteller() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter HId: ");
		hid = sc.nextInt();
		System.out.print("Enter Name: ");
		name = sc.next();
		System.out.print("Enter Gender: ");
		gender = sc.next().charAt(0);
		System.out.print("Enter contact no: ");
		contactno = sc.next();
	}
}
