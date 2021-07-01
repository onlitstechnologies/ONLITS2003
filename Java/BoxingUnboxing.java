public class BoxingUnboxing {
    public static void main(String[] args) {
        int i = 50;
        Integer ior = i;   //autoboxing
        int a = ior;        //unboxing
        System.out.println(a);
    }
}
