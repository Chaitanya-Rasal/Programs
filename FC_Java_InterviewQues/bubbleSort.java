
package FC_Java_InterviewQues;

public class bubbleSort {
	public static int[] sort(int a[]) {
		for(int i=0;i<a.length;i++) {
			for(int j=0;j<a.length-i-1;j++) {
				if(a[j]>a[j+1]) {
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		return a;
	}
	public static void main(String[] args) {
		int a[]= {6,5,2,3,4,1};
		int b[]=bubbleSort.sort(a);
		for(int i=0;i<b.length;i++) {
			System.out.print(b[i] +" ");
		}
		
	}

}
