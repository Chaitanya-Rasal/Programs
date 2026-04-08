package FC_Java_InterviewQues;

public class selectionSort {
	public static int [] sort(int[] a) {
		for(int i=0;i<a.length-1;i++) {
			int min=i;
			for(int j=i+1;j<a.length;j++) {
				if(a[j]<a[min]) {
					min=j;
				}
			}
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
			
			
		}
		return a;
	}
	public static void main(String[] args) {
		int a[]= {1,5,3,2,4};
		int c[]=selectionSort.sort(a);
		for(int x:c) {
			System.out.println(x);
		}
	}

	

}
