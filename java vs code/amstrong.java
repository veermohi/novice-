import java.util.*;

public class amstrong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = a;
        double n=0;
        double r,c=0;
        while(a!=0) {
            ++c;
            a = a / 10;
        }
        int t = b;
        while(t!=0) {
            r = t % 10;
            n = n + Math.pow(r,c);
            t = t / 10;
        }
        if(n == b) {
            System.out.println("armstrong");
        } else {
            System.out.println("not armstrong");
        }
        System.out.println(n);
        scanner.close();
    }
}