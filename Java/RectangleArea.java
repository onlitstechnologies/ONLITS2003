import java.util.Scanner;
class RectangleArea {
	public static void main(String[] args) {
		int l, b, a;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter length: ");
		l = scan.nextInt();
		System.out.print("Enter breadth: ");
		b = scan.nextInt();
		a = l * b;
		System.out.println("The area is " + a + " sq. units");
	}
}
