package practical;
import java.util.*;
public class Odd_Triangle {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=n-1;s>=r;s--) {
				System.out.print(" ");
			}
			for(int c=1;c<=r;c++) {
				System.out.print("* ");
			}
			System.out.println();
		}
		sc.close();

	}
}
