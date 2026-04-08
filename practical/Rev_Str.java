package practical;
import java.util.*;
public class Rev_Str {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter Name :");
	String name=sc.next();
	char a[]=name.toCharArray();
	for(int i=a.length-1;i>=0;i--) {
		System.out.print(a[i]);
	}
}
}
