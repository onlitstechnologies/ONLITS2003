package onlits2003.constructorchaining;

class A {
    private int a;

    A() {
    }

    A(int x) {
        a = x;
    }

    void display_a() {
        System.out.println("a = " + a);
    }
}

class B extends A {
    private int b;

    B() {
    }

    B(int y) {
        b = y;
    }

    B(int x, int y) {
        super(x);                   //super keyword here refers to super class constructor
        b = y;
    }

    void display_b() {
        System.out.println("b = " + b);
    }

    void display_ab() {
        display_a();
        display_b();
    }
}

public class ConstructorChaining {
    public static void main(String[] args) {
        B obb = new B(10, 20);
        obb.display_ab();
    }
}
