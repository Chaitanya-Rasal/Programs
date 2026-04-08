package practical;
import java.util.*;
public class practical1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num;
		int sum=0;
		
		System.out.println("Enter Number ");
		num=sc.nextInt();
		while(num>0) {
			sum+=num%10;
			num/=10;
		}
		System.out.println("Sum of Digits :"+sum);
		sc.close();
	}
}
