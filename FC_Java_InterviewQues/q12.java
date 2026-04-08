//.Print pattern
//*
//* *
//* * *
//* * * *
//* * * * *
package FC_Java_InterviewQues;

public class q12 {

	public static void main(String[] args) {
		for(int i=1;i<=5;i++) {
			for(int s=1;s<=5-i;s++) {
				System.out.print(" ");
			}
			for(int j=1;j<=i;j++) {
				System.out.print("* ");
			}
			System.out.println();
		}
		for(int i=1;i<=5;i++) {
			for(int s=1;s<=i;s++) {
				System.out.print(" ");
			}
			for(int j=1;j<=5-i;j++) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}

}
