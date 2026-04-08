package assignment;

import java.util.*;
public class Duplicate_array_elements {
	String names[];
	int f=0;
	public void accept() {
		Scanner sc=new Scanner(System.in);
		System.out.println("How many elements ");
		int n=sc.nextInt();
		 names=new String[n];
		System.out.println("Enter names : ");
		for(int i=0;i<n;i++) {
			names[i]=sc.next();		
			}
	}
	public int display() {
		for(int i=0;i<names.length;i++) {
			for(int j=i+1;j<names.length;j++) {
				if(names[i].equals(names[j])) {
					f=1;
					break;
				}
			}
		}
		return f;
	}
	public static void main(String[] args) {
		Duplicate_array_elements a=new Duplicate_array_elements();
		a.accept();
		int m=a.display();
		if(m==1) {
			System.out.println("Duplicate is present");
		}
		else {
			System.out.println("Duplicate is not present");
		}
		
}
}
