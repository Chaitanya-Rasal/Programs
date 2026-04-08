package practical;
import java.util.*;
public class Friday_num_Pattern {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=1;s>=n;s++) {
				System.out.print(" ");
			}
			for(int c=1;c<=r;c++) {
				if((r+c)%2==0) {
					System.out.print("1");
				}
				else
				{
					System.out.print("0");
				}
							}
			System.out.println();
		}
		sc.close();

	}
}
//  1 2 3 4
//1 1			r=odd/c=odd
//2 0 1
//3 1 0 1
//4 0 1 0 1
//5 1 0 1 0 1