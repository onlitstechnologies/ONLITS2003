public class MethodOverloading {
    public static void main(String[] args) {
        System.out.println("Sum of 10 and 20 is " + sum(10,20));
        System.out.println("Sum of 15.7 and 39.3 is " + sum(15.7F, 39.3F));
    }

    static int sum(int a, int b) {
        return a + b;
    }

    static float sum(float a, float b) {
        return a + b;
    }

}
/* This program demonstrates the feature of method overloading in Java. */
