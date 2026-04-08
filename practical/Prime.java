package practical;
import java.util.*;
public class Prime {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int f=0;
	System.out.println("Enter Number : ");
	int no=sc.nextInt();
	for(int i=2;i<no;i++) {
		if(no%i==0) {
			f=1;
			break;
		}
	}
	if(f==0) {
		System.out.println("Prime");

	}
	else {
		System.out.println("Not Prime");

	}
	sc.close();
}
}
