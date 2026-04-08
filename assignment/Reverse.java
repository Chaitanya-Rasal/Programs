package assignment;
import java.util.*;
public class Reverse {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int sum=0;
	System.out.println("Enter Number : ");
	int n=sc.nextInt();
	int a=n;
	while(n>0) {
		sum=sum*10+n%10;
		n/=10;
	}
	System.out.println("Reverse of "+a+" is "+sum);
	sc.close();
}
}
