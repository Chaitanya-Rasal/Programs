package assignment;
import java.util.*;
public class Two_DArray {
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
		int l=a[0][0];
		for(int r=0;r<i;r++) {
			for(int c=0;c<j;c++) {
				System.out.print(a[r][c]+" ");
				if(l<a[r][c]) {
					l=a[r][c];
				}
			}
			System.out.println();
		}
		int s=0;
		for(int r=0;r<i;r++) {
			for(int c=0;c<j;c++) {
				if(s<a[r][c] && a[r][c]!=l) {
					s=a[r][c];
				}
			}
		}
		
		System.out.println("2nd Largest Number "+s);
		sc.close();
	}	
}
