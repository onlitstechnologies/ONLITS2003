import java.util.Scanner;
class Menu {
	void mainMenu() {
		int ch;
		Room r = new Room();
		Hosteller h = new Hosteller();
		Scanner sc = new Scanner(System.in);
		System.out.println("MAIN MENU");
		System.out.println("1. New Room");
		System.out.println("2. New Hosteller");
		System.out.println("3. Exit");
		System.out.print("Enter your choice: ");
		ch = sc.nextInt();
		switch(ch) {
			case 1:
				r.newRoom();
				mainMenu();
				break;
			case 2:
				h.newHosteller();
				mainMenu();
				break;
			case 3:
				break;	
			default:
				System.out.println("Invalid option!");
				mainMenu();
		}
	}
}
