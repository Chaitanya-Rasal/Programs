//Write a java program for factorial number?
package FC_Java_InterviewQues;

import java.util.Scanner;

public class q11 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Number ");
		int n=sc.nextInt();
		int f=1;
		while(n>0) {
			f=f*n;
			n--;
		}
		System.out.println("Factorial of given number is "+f);
		sc.close();
	}

}
