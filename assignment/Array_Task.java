package assignment;
import java.util.*;
public class Array_Task {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	Array_Task at=new Array_Task();

	System.out.println("How many elements in your array : ");
	int n=sc.nextInt();
	int []a=new int[n];
	for(int i=0;i<n;i++) {
		System.out.println("Enter Number : ");
		a[i]=sc.nextInt();
	}
	System.out.println("Sum of array elements : "+at.sumE(a,n));
	System.out.println("Sum of Index : "+at.sumI(n));
	System.out.println("Average of Elements : "+at.avg(a, n));
	System.out.println("Largest Element :"+at.larg(a, n));
	System.out.println("Smallest Element :"+at.small(a, n));

	sc.close();
}
int sumE(int a[],int n) {
	int s = 0;
	for(int i=0;i<n;i++) {
		s+=a[i];
	}
	return s;
}
int sumI(int n) {
	int a=0;
	for(int i=0;i<n;i++) {
		a+=i;
	}
	return a;
}
float avg(int a[],int n) {
	return (float)sumE(a,n)/n;
}
int larg(int a[],int n) {
	int l=a[0];
	for(int i=0;i<n;i++) {
			if(l<a[i]) {
				l=a[i];
			}	
		}
	return l;
}
int small(int a[],int n) {
	int s=a[0];
	for(int i=0;i<n;i++) {
			if(s>a[i]) { 
				s=a[i];
			}
		}
	return s;
}
}