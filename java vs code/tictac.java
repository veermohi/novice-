import java.util.*;
public class tictac
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a ;
		int b ;
		int c = 0;
		int d = 0;
		boolean f = true;
		System.out.println("Enter  points for player who wins the point, enter 0 for player who loses the point");
		
		while(f){
		    System.out.println("Enter points scored by a and b");
		    a = scanner.nextInt();
            b = scanner.nextInt();
		    if(a == 15) {
		        c = c + 15;
		    }
		    else if(c == 30 || c == 40 || c == 50 || c == 60){
		        c = c + 10;
		    }
		    if(b == 15) {
		        d = d + 15;
		    }
		    else if(d == 30 || d == 40 || d == 50 || d == 60) {
		        d = d + 10;
		    }
		    if(c == 30 || d == 30) {
		        System.out.println("After 30 points, increase points by 10");
		    }
		    if(c == 60 && d == 60) {
		        System.out.println("ohoo deuce");
		        c = 50;
		        d = 50;
		    }
		    if((c == 70 || c == 60) && d <= 50){
		        System.out.println("A wins");
		        f = false;
		    }
		    else if((d == 70 || d == 60) && c <= 50) {
		        System.out.println("B wins");
		        f = false;
		    }
		}
		scanner.close();
	}
}