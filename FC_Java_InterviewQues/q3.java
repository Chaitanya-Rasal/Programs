//Write Java Program to check if a vowel is present in the string?
package FC_Java_InterviewQues;

import java.util.*;

public class q3 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String ");
		String a=sc.next();
		if(a.contains("a") ||a.contains("e") || a.contains("i") || a.contains("o") || a.contains("u")
				|| a.contains("A") ||a.contains("E") || a.contains("I") || a.contains("O") || a.contains("U")) {
			System.out.println("Vowel is present in "+a+" String");
		}
		else {
			System.out.println("Vowel is not present in "+a+" String" );

		}
		sc.close();
	}

}
