//Fibonacci Series using recursion?
package FC_Java_InterviewQues;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class q5 {
	
	static int fib(int n) {
		if(n==0) 
			return 0;
		if(n==1)
			return 1;
		
		return fib(n-1)+fib(n-2);
	}
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Number upto u want to print series : ");
		int n=Integer.parseInt(br.readLine());
		for (int i = 0; i < n; i++) {
            System.out.print(fib(i) + " ");
        }
		
	}

}
