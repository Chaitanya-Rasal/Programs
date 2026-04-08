package practical;
import java.util.*;
public class fibonacci {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter Number : ");
	int no=sc.nextInt();
	int f=0,s=1,n=1;
	System.out.println("Fibonacci Series Upto "+no);
	for(int i=0;i<no;i++) {
		System.out.print(f+" ");
		f=s;
		s=n;
		n=f+s;
	}
	sc.close();
}
}
