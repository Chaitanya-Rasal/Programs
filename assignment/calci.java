package assignment;
import java.util.*;
public class calci {

	public static void main(String[] args) {
		int num1,num2;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 1St Number : ");
		num1=sc.nextInt();
		System.out.println("Enter 2nd Number : ");
		num2=sc.nextInt();
		System.out.println("Addition is : "+(num1+num2));
		System.out.println("Subtraction is : "+(num1-num2));
		System.out.println("Multiplication is : "+(num1*num2));
		System.out.println("Division is : "+((float)num1/num2));
		sc.close();
	}

}
