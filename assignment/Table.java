package assignment;
import java.util.*;
public class Table {
public static void main(String[] args) {
	 Scanner sc=new Scanner(System.in);
	 System.out.println("Enter Number : ");
	 int no=sc.nextInt();
	 for(int i=1;i<=10;i++) {
		 System.out.println(+no+"*"+i+"="+no*i);
	 }
	 sc.close();
}
}
