//How to swap two numbers without using a third variable?
package FC_Java_InterviewQues;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class q2 {

	public static void main(String[] args) throws IOException {
	
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Num 1 : " );
        int v1 = Integer.parseInt(br.readLine());
		System.out.println("Enter Num 2 : " );
        int v2 = Integer.parseInt(br.readLine());
		System.out.println("Before Swapping ");
		System.out.println("Num1 = "+v1 +" Num2 = "+v2);
		v1=v1+v2;
		v2=v1-v2;
		v1=v1-v2;
		System.out.println("After Swapping ");
		System.out.println("Num1 = "+v1 +" Num2 = "+v2);
	}

}
