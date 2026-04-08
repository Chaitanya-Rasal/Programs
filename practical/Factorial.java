package practical;
import java.util.*;
public class Factorial {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int sum=1;
		System.out.println("Enter Number : ");
		int no=sc.nextInt();
		for(int i=1;i<=no;i++) {
			sum=sum*i;
			System.out.println("Factorial of "+i+" !is "+sum);

		}
		sc.close();
	}

}
