import java.util.Scanner;
interface IShape {                 //Abstract Class
    public final float PI = 3.14F;          //Constant declaration
 
    public abstract void input();
    public abstract float area();
}

class ICircle implements IShape {
    private float rad;
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius: ");
        rad = sc.nextFloat();
        //sc.close();
    }

    public float area() {
        return PI * rad * rad;
    }
}

class IRectangle implements IShape {
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

class ITriangle implements IShape {
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

public class InterfaceDemo {
    public static void main(String[] args) {
        IShape s;
        s = new ICircle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of circle is " + s.area());    //Runtime Polymorphism

        s = new IRectangle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of circle is " + s.area());    //Runtime Polymorphism

        s = new ITriangle();
        s.input();              //Runtime Polymorphism
        System.out.println("The area of triangle is " + s.area());  //Runtime Polymorphism
    }
}