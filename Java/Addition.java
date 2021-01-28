import java.util.*;

class Addition {
	 public static void main(String[] args) {
		int a, b, c;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		a = scan.nextInt();
		System.out.print("Enter another number: ");
		b = scan.nextInt();
		c = a + b;
		System.out.println("The sum is " + c + ".");
	}
}

/*
	In this program:
		out is a predefined object.
		out is an object of printstream class.
		
		But scan is a user-defined object.
		
		java.util is a package (collection of class and like)
		
		JDK
*/


