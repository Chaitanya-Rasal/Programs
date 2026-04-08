package practical;
import java.util.*;
public class Number_pattern {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int ch=65;
		System.out.println("Enter n: ");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				System.out.print((char)ch+" ");
			}
			System.out.println();
			ch++;
		}
		sc.close();
	}
}
