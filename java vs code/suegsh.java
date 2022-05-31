import java.util.*;

public class suegsh {
    public static void main(String[] args) {
        Scanner susan = new Scanner(System.in);
        String[] names = new String[2];
        String fullname = " ";
        for(int i = 0; i < 2;i++){
            names[i] = susan.nextLine();
            fullname += names[i];
        }
        System.out.println(fullname);
        susan.close();
    }
}
