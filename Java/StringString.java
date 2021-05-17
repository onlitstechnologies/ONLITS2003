/*
	Program to accept and display a string by storing string in a string class object. 
*/
import java.util.Scanner;
public class StringString {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name; // dynamic memory allocation
        System.out.print("Enter your name: ");
        // cin>>name; //single word string
        name = sc.nextLine();   // multi word string
        System.out.println("Good morning! " + name);
        sc.close();
        // cout<<"Size of name is "<<sizeof(name)<<endl;
    }
}

/*
 * When we use OOP then we call a function using an object
 */