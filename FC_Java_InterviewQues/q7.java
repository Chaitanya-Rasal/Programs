//Program to print the elements of an array present on even position?
package FC_Java_InterviewQues;

import java.util.Scanner;

public class q7 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("How many elements in your array : ");
		int n=sc.nextInt();
		int [] arr=new int[n];
		for(int i=0;i<n;i++) {
			System.out.println("Enter Number ");
			arr[i]=sc.nextInt();
		}
		System.out.println(" Elements at even position ");
		for(int i=0;i<n;i+=2) {
			System.out.println(arr[i]);
			
		}
		sc.close();
	}

}
