//leapyear
package FC_Java_InterviewQues;

import java.util.Scanner;

public class q18 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Year ");
		int year=sc.nextInt();
		if((year %4==0 && year %100 !=0)||(year %400==0)) {
			System.out.println("Leap year");
		}
		else {
			System.out.println("Not leap");
		}
	}

}
