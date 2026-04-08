//Write Java Program to Find 2nd Largest Number in an array?
package FC_Java_InterviewQues;

import java.util.Scanner;

public class q8 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("How many elements in your array ..? ");
		int n=sc.nextInt();
		int []arr=new int[n];
		int max=arr[0];
		int Secondmax=arr[0];
		for(int i=0;i<n;i++) {
			System.out.println("Enter Number ");
			arr[i]=sc.nextInt();
			if(arr[i]>max) {
				Secondmax=max;
				max=arr[i];
			}
		}
		System.out.println("Second largest number in array is "+Secondmax);
		sc.close();
	}

}
