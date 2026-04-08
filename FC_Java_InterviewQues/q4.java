//Write Java program to check if the given number is Prime?

package FC_Java_InterviewQues;

import java.util.Scanner;

public class q4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Number : ");
		int f=0;
		int itr=sc.nextInt();
		for(int i=2;i<=itr/2;i++) {
			f=0;
			if(itr%i==0) {
				f=1;
				break;
			}
		}
		if(f==0) {
			System.out.println(itr +" is Prime Number");
		}
		else {
			System.out.println(itr +" is not Prime Number");

		}
		sc.close();
	}

}
