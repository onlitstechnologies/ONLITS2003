import java.util.Scanner;
class Fibonacci {
	public static void main(String[] args) {
		int ft=0, st=1, nt, n;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		n = scan.nextInt();
		if(n<=1) {
			System.out.println("Invalid Input!");
		}
		else {
			System.out.println("Fibonacci Series upto " + n + " terms is:");
			System.out.print(ft + ", " + st);
			for(int i=3; i<=n; i++) {
				nt=ft+st;
				System.out.print(" ," + nt);
				ft = st;
				st = nt;
			}
			System.out.println(".");
		}
	}
}

/*Correct upto 47 terms*/
