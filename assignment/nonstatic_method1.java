package assignment;
import java.util.*;
public class nonstatic_method1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		nonstatic_method1 ns=new nonstatic_method1();
		int num1,num2;
		System.out.println("Enter Num1 : ");
		num1=sc.nextInt();
		System.out.println("Enter Num2 : ");
		num2=sc.nextInt();
		ns.addition(num1,num2);
System.out.println("Nonstatic with parameter & return type : "+ns.addReturn(num1, num2));
		sc.close();
	}
	void addition(int num1,int num2) {
		System.out.println("Nonstatic with parameter : "+(num1+num2));
	}
	int addReturn(int num1,int num2) {
		return (num1+num2);
	}
}
