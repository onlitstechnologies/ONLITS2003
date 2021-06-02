class Complex {
    private float real;
    private float imag;

    public Complex() {
        real = 0.0F;
        imag = 0.0F;
    }

    public Complex(float x, float y) {
        this.real = x;
        imag = y;
    }

    public void input(float x, float y) {
        real = x;
        imag = y;
    }

    public void display()
    {
        System.out.println("real: " + this.real);
        System.out.println("imag: " + this.imag);
    }

    Complex add(Complex p) {
        Complex t = new Complex();
        t.real = real + p.real;
        t.imag = imag + p.imag;
        return t;
    }
}

class ComplexNumber {
    public static void main(String[] args) {
        Complex c1 = new Complex(10.3F, 20.6F);
        Complex c2 = new Complex(25.6F, 99.7F);
        Complex c3;     //Object Reference Declaration
        c3 = c1.add(c2);    //C3 initialized here
        //c3 = c1 + c2;     Not supported in java
        c1.display();
        c2.display();
        c3.display();
    }
}