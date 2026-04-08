package assignment;
import java.util.*;
public class Inner_Additon {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("How many rows in your array : ");
		int i=sc.nextInt();
		System.out.println("How many columns in your array : ");
		int j=sc.nextInt();
		int a[][]=new int[i][j];
		for(int r=0;r<i;r++) {
			for(int c=0;c<j;c++) {
				System.out.println("Enter Number : ");
				a[r][c]=sc.nextInt();
				
			}
		}
		for(int r=0;r<i;r++) {
			for(int c=0;c<j;c++) {
				System.out.print(a[r][c]+" ");
			}
			System.out.println();
		}
		int s=0;
		for(int r=0;r<i;r++) {
			for(int c=0;c<j;c++) {
				if(r!=0 && c!=0 && r!=(i-1) && c!=(j-1)) {
				s+=a[r][c];
			}
		}
		}
		System.out.println("Sum of Inner Element : "+s);
		sc.close();
	}
	}
	
