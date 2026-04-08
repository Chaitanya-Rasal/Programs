//Write Java Program to Remove Duplicate Element in an array?
package FC_Java_InterviewQues;

import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.TreeSet;

public class q9 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("How Many Elements in your array ..? ");
		int n=sc.nextInt();
		int []arr=new int [n];
		for(int i=0;i<n;i++) {
			System.out.println("Enter Number ");
			arr[i]=sc.nextInt();
		}
		TreeSet<Integer> h1=new TreeSet<>();
		for(int a:arr) {
			h1.add(a);
		}
		System.out.println("After removing duplicate values Array is ");
		for(int a:h1) {
			System.out.println(a);
		}
		
		sc.close();
	}

}
