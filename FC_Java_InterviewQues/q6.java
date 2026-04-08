//Write Java Program to print the duplicate elements of an array
package FC_Java_InterviewQues;

import java.util.ArrayList;
import java.util.Scanner;

public class q6 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("How Many Elements in your array ..? ");
		int n=sc.nextInt();
		int []arr=new int[n];
		ArrayList<Integer> a1=new ArrayList<>();
		for(int i=0;i<n;i++) {
			System.out.println("Enter Number ");
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(arr[i]==arr[j]){
					if(!a1.contains(arr[i])) {
						a1.add(arr[i]);
					}
				}
			}
		}
		System.out.println("Duplicate elements in array");
		for(int c : a1) {
			System.out.println(c);
		}
		sc.close();
	}

}
