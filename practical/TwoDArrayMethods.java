package practical;
import java.util.Scanner;
public class TwoDArrayMethods {

	    public void sumarray(int arr[][]) {
	        int sum = 0;
	        for(int i = 0; i < arr.length; i++) {
	            for(int j = 0; j < arr[i].length; j++) {
	                sum += arr[i][j];
	            }
	        }
	        System.out.println("Sum of array = " + sum);
	    }

	    public void smallest(int arr[][]) {
	        int min = arr[0][0];
	        for(int i = 0; i < arr.length; i++) {
	            for(int j = 0; j < arr[i].length; j++) {
	                if(arr[i][j] < min) {
	                    min = arr[i][j];
	                }
	            }
	        }
	        System.out.println("Smallest number = " + min);
	    }

	    public void countzero(int arr[][]) {
	        int count = 0;
	        for(int i = 0; i < arr.length; i++) {
	            for(int j = 0; j < arr[i].length; j++) {
	                if(arr[i][j] == 0) {
	                    count++;
	                }
	            }
	        }
	        System.out.println("Count of 0 = " + count);
	    }
	    public void evennumbers(int arr[][]) {
	        System.out.println("Even numbers in array:");
	        for(int i = 0; i < arr.length; i++) {
	            for(int j = 0; j < arr[i].length; j++) {
	                if(arr[i][j] % 2 == 0) {
	                    System.out.print(arr[i][j] + " ");
	                }
	            }
	        }
	        System.out.println();
	    }
	    public void secondlargest(int arr[][]) {

	        int l = arr[0][0];
	        int s =0;

	        for(int i = 0; i < arr.length; i++) {
	            for(int j = 0; j < arr[i].length; j++) {

	                if(arr[i][j] > l) {
	                    s = l;
	                    l = arr[i][j];
	                }
	            }
	        }

	        System.out.println("Second Largest = " + s);
	    }
	    public static void main(String[] args) {

	        Scanner sc = new Scanner(System.in);
	        int r,c;
	        System.out.println("How many rows : ");
	        r=sc.nextInt();
	        System.out.println("How many columns : ");
	        c=sc.nextInt();
	        int arr[][] = new int[r][c];
	        System.out.println("Enter elements of array:");
	        for(int i = 0; i < r; i++) {
	            for(int j = 0; j < c; j++) {
	                arr[i][j] = sc.nextInt();
	            }
	        }
	        System.out.println("Array Elements ");
	        for(int i = 0; i < r; i++) {
	            for(int j = 0; j < c; j++) {
	                System.out.print( arr[i][j] + " ");
	            }
	            System.out.println();
	        }
	        TwoDArrayMethods aa=new TwoDArrayMethods();
	        aa.sumarray(arr);
	        aa.smallest(arr);
	        aa.countzero(arr);
	        aa.evennumbers(arr);
	        aa.secondlargest(arr);
	        sc.close();
	    }
}
