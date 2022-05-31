import java.util.*;

public class chef {
    public static void main(String[] args) {
        Scanner abishek=new Scanner(System.in);
        int n=0,t=0;
        int l=abishek.nextInt();
        String f= abishek.next();
        for(int i=0;i<l;i++){
            if(f.charAt(i)=='N'){
                n++;
            }
            else if (f.charAt(i)=='T'){
                t++;
            }
        }
        if(n>t){
            System.out.println("Nutan");
        }
        else{
            System.out.println("tushan");
        }
        

        abishek.close();
    }
}