package practical;
import java.util.*;
public class Solid_Sym_pattern {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		int n=sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if((i+j)%2==0) {
					System.out.print("5 ");
				}
				else {
					System.out.print("* ");

				}
			}
			System.out.println();
		}
		sc.close();
	}
}
