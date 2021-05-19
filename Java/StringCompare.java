import java.util.Scanner;

public class StringCompare {
    public static void main(String[] args) {
        String ans;
        Scanner sc = new Scanner(System.in);
        System.out.println("Who is the fater of C++?");
        ans = sc.nextLine();
        if (ans.compareToIgnoreCase("Bjarne Stroustrup")==0) {
            System.out.println("Very Good!");
        } else {
            System.out.println("Very Poor!");
        }
        sc.close();
    }
}

/* here ans is like a pointer*/