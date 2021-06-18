class StaticVariableSupport {
    int a;              //instance/object variable
    static int b;       //class variable (common)

    StaticVariableSupport(int pa, int pb)  //Constructor
    {
        a = pa;
        b = pb;
    }

    void inc_a()
    {
        a++;
    }

    void inc_b()
    {
        b++;
    }

    void display()
    {
        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}

public class StaticVariables {
    public static void main(String[] args) {
        StaticVariableSupport or1 = new StaticVariableSupport(10, 20);
        System.out.println("or1 value before increment:");
        or1.display();   
        StaticVariableSupport or2 = new StaticVariableSupport(100, 200);
        System.out.println("or2 value before increment:");
        or2.display();

        System.out.println("or1 value after increment:");
        or1.inc_a();
        or1.inc_b();
        or1.display();  
        System.out.println("or2 value after increment:");
        or2.inc_a();
        or2.inc_b();
        or2.display();
    }
}