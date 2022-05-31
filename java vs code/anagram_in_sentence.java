import java.util.*;

public class anagram_in_sentence {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] array = sc.nextLine().split(" ");
        
        
    }


    public static boolean isAnagram(String str1, String str2){
        if(str1.length() != str2.length()){
            return false;
        }

        int sum1 = getSum(str1);
        int sum2 = getSum(str2);


    }

    public static int getSum(String str){
        int sum = 0;
        for(int i = 0; i < str.length(); i++){
            char ch = str.charAt(i);
            if(ch >= 'a' && ch <= 'z' || ch >= 'A' && 
        }
    }

    

}
