package practical;
import java.util.*;
public class Reverse_leftangleTriangle {

	public static void main(String[] args) {
		System.out.println("Enter n :");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=1;s<r;s++) {
				System.out.print(" ");
			}
			char ch='A';
			for(int c=n;c>=r;c--) {

				System.out.print(ch);
				ch++;
			}
			System.out.println();
		}
		sc.close();

	}
}
