package practical;
import java.util.*;
public class Reverse_number_triangle {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=1;s>=n;s++) {
				System.out.print(" ");
			}
			for(int c=r;c>=1;c--) {
				System.out.print(c);
			}
			System.out.println();
		}
		sc.close();

	}
}
