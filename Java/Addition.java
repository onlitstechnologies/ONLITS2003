import java.util.Scanner;
class Addition
{
	public static void main(String[] args)
	{
		int a, b, c;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		a = scan.nextInt();
		System.out.print("Enter another number: ");
		b = scan.nextInt();
		c = a + b;
		System.out.println("The sum is " + c);
	}
}
