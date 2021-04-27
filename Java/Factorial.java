import java.util.Scanner;

class Factorial {
	public static void main(String[] args) {
		int n, fact=1, i;
		Scanner scan = new Scanner(System.in);
	
		System.out.print("Please enter a number: ");
		n = scan.nextInt();
	
	
		for(i=n; i>=1; i--){
			fact = fact * i;
		}
	
		System.out.println(n + "! is " + fact + ".");
	}
}
