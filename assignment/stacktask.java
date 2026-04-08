package assignment;

import java.util.Scanner;
import java.util.Stack;

public class stacktask {
public static void main(String[] args) {
	Stack s=new Stack();
	Scanner sc=new Scanner(System.in);
	System.out.println("How many bank name : ");
	int n=sc.nextInt();
	for(int i=0;i<n;i++) {
		System.out.println("Enter Bank Name : ");
		s.push(sc.next());
		
	}
	System.out.println("Before Removing Stack is : ");
	System.out.println(s);
	if(s.contains("sbi")) {
		s.remove("sbi");
	}
	System.out.println("After Removing  sbi , Stack is : ");
	System.out.println(s);
}
}
