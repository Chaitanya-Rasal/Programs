package practical;
import java.util.*;
public class EvenNumberSeries {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter start Number : ");
	int st=sc.nextInt();
	System.out.println("Enter Last Number : ");
	int lt=sc.nextInt();
	for(int i=st;i<=lt;i++) {
		if(i%2==0) {
			System.out.print(i+" ");
		}
	}
	sc.close();
}
}
