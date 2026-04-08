package assignment;
import java.util.*;
public class SumOfFirstN {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int sum=0;
	System.out.println("Enterr Number : ");
	int no=sc.nextInt();
	for(int i=1;i<=no;i++) {
		sum=sum+i;
	}
	System.out.println("Sum of First N number is : "+sum);
	sc.close();
}
}
