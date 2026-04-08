package practical;
import java.util.*;
public class largest {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Num1 : ");
		int num1=sc.nextInt();
		System.out.println("Enter Num2 : ");
		int num2=sc.nextInt();
		System.out.println("Enter Num3 : ");
		int num3=sc.nextInt();
		if(num1>num2 && num1>num3) {
				System.out.println(+num1+" Is Greater");
		}
		else if(num2>num3) {
			System.out.println(+num2+" Is Greater ");
		}
		else {
			System.out.println(+num3+" Is Greater ");
		}
		sc.close();
	}

}
