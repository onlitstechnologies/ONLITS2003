import java.util.Scanner;

public class StringLengthLibrary {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        str = sc.nextLine();
        System.out.println("The length of " + str + " is " + str.length() + " characters.");
        sc.close();
    }
}
