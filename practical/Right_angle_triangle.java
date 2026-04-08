package practical;
import java.util.*;
public class Right_angle_triangle {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int r=1;r<=n;r++) {
			for(int s=1;s>=n;s++) {
				System.out.print(" ");
			}
			for(int c=1;c<=r;c++) {
				System.out.print(c);
			}
			System.out.println();
		}
		sc.close();

	}
}
