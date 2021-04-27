import java.util.Scanner;
class Room {
	String roomno;
	char block;
	int noofbeds;
	
	void newRoom() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter room no: ");
		roomno = sc.next();
		System.out.print("Enter block no: ");
		block = sc.next().charAt(0);
		System.out.print("Enter number of beds: ");
		noofbeds = sc.nextInt();
	}
	
	void editRoom() {
	
	}
}
