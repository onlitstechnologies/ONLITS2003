import java.util.Scanner;
public class GoodMorning {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		System.out.print("Enter your name: ");
		name = sc.nextLine();	//Reading multiword string
		System.out.println("Good Morning! " + name);
	}
}
