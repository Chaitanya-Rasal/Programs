package practical;
import java.util.*;
public class amstrong {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	double sum=0;
	int r=0,cnt=0;
	System.out.println("Enter Number : ");
	int no=sc.nextInt();
	int a=no;
	while(no>0) {
		cnt++;
		no/=10;
	}
	System.out.println(cnt);
	no=a;
	while(no>0) {
		r=no%10;
		sum=sum+Math.pow(r,cnt);
		no/=10;
	}
	if(sum==a) {
		System.out.println("Amstrong");
	}
	else {
		System.out.println("Not Amstrong");
	}
	sc.close();
}
}
