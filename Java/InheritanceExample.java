class A {
    protected int a;

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
        a = x;
        b = y;
    }

    void display_b() {
        System.out.println("b = " + b);
    }

    void display_ab() {
        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}

public class InheritanceExample {
    public static void main(String[] args) {
        B obb = new B(10, 20);
        obb.display_ab();
    }
}
