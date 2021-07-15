import java.sql.*;

public class ExceptionExample {
    public static void main(String[] args) {
        int a = 250, b = 85, c = 85, x = 0;
        int[] arr = new int[5];

        try {
            x = a / (b - c);
            System.out.println("x = " + x);
        } catch (ArithmeticException ex) {
            System.out.println(ex);
        }

        try {
            arr[5] = 10;
        } catch (ArrayIndexOutOfBoundsException ex) {
            System.out.println(ex);
        }

        try {
            Connection con = DriverManager.getConnection("jdbd:mysql://localhost");
        } catch (SQLException ex) {
            System.out.println(ex);
        }
        
        System.out.println("Aal is well!");
    }
}
