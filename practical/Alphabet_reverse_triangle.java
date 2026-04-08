package practical;
import java.util.*;
public class Alphabet_reverse_triangle {

	public static void main(String[] args) {
		char a='z';
		System.out.println("Enter n :");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=1;s<r;s++) {
				System.out.print(" ");
			}
			for(int c=n;c>=r;c--) {

				System.out.print(a+" ");
			}
			a--;
			System.out.println();
		}
		sc.close();
	}
}
