import java.util.Scanner;
public class ArraySelectionSort {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		final int SIZE = 5;
		int no[] = new int[SIZE];
		System.out.println("Enter " + SIZE + " numbers below:");
		
		for(int i=0; i<SIZE; i++) {		//Input
			no[i] = scan.nextInt();
		}
		
		for(int i=0; i<SIZE-1; i++) {	//Sorting
			for(int j=i+1; j<SIZE;j++) {
				if(no[i]>no[j]) {
					int t = no[i];
					no[i] = no[j];
					no[j] = t;
				}
			}
		}
		
		System.out.println("The sorted array is:");
		for(int i=0; i<SIZE; i++) {
			System.out.println(no[i]);
		}
	}
}
