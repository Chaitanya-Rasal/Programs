package basics;
import java.util.*;

public class scannerdemo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter name :");
		String a=sc.nextLine();
		System.out.println("name is :"+a);
		System.out.println("enter mobile number :" );
		long num =sc.nextLong();
		System.out.println("Number is : "+num);
		sc.close();
	}

}
