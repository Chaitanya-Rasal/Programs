package practical;
import java.util.*;
public class New {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=n-1;s>=r;s--) {
				System.out.print(" ");
			}
			for(int c=1;c<=r;c++) {
				if(r%2==1) {
				System.out.print("1"+" ");
				}
				else {
					System.out.print("0"+" ");
				}
			}
			System.out.println();
		}
		for(int r=1;r<=n;r++) {
			for(int s=1;s<r;s++) {
				System.out.print(" ");
			}
			for(int c=n-1;c>=r;c--) {
				if(r%2==0) {
				System.out.print(" "+"1");
				}
				else
				{
					System.out.print(" "+"0");

				}
			}
			System.out.println();

		}
		
		sc.close();

	}
}
