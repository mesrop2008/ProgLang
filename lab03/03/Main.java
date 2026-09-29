public class Main {
    public static void main(String[] args) {
        int i = 3.7;
        System.out.println("int i = 3.7;        i = " + i);

        boolean flag = 10;
        System.out.println("boolean flag = 10;  flag = " + flag);

        int k = true;
        System.out.println("int k = true;       k = " + k);

        int n = 3;
        if (n) System.out.println("if (n)              n != 0");

        int s = true + true;
        System.out.println("true + true         s = " + s);

        long big = 5000000000L;
        int cut = big;
        System.out.println("int cut = 5000000000L; cut = " + cut);

        char ch = 'A' + n;
        System.out.println("char ch = 'A' + n;  ch = " + ch);

        while (n--) System.out.println("while (n--)         n = " + n);
    }
}
