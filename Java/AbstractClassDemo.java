import java.util.Scanner;
abstract class Shape {                 //Abstract Class
    public final float PI = 3.14F;          //Constant declaration
 
    public abstract void input();
    public abstract float area();
    public void test() {
        System.out.println("This is a test method!");
    }
}

class Circle extends Shape {
    private float rad;
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius: ");
        rad = sc.nextFloat();
        //sc.close();
    }

    public void test() {
        System.out.println("This test method is overriddin in Circle!");
    }

    public float area() {
        return PI * rad * rad;
    }
}

class Rectangle extends Shape {
    private float ln, br;
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        ln = sc.nextFloat();
        System.out.print("Enter breadth: ");
        br = sc.nextFloat();
        //sc.close();
    }
    public float area() {
        return ln * br;
    }

}

class Triangle extends Shape {
    private float a, b, c, s;
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of a: ");
        a = sc.nextFloat();
        System.out.print("Enter the value of b: ");
        b = sc.nextFloat();
        System.out.print("Enter the value of c: ");
        c = sc.nextFloat();
    }
    public float area() {
        return (float) Math.sqrt(s*((s-a) * (s-b) * (s-c)));
    }
}

public class AbstractClassDemo {
    public static void main(String[] args) {
        Shape s;
        s = new Circle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of circle is " + s.area());    //Runtime Polymorphism
        s.test();

        s = new Rectangle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of circle is " + s.area());    //Runtime Polymorphism

        s = new Triangle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of triangle is " + s.area());  //Runtime Polymorphism

    }
}