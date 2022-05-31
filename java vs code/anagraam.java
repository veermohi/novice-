import java.util.*;

public class anagraam {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            String a = scanner.nextLine();
            String b = scanner.nextLine();
            char []c = a.toUpperCase().toCharArray();
            char []d = b.toUpperCase().toCharArray();

            Arrays.sort(c);
            Arrays.sort(d);

            if(Arrays.equals(c,d)) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
            scanner.close();
        }
    }
