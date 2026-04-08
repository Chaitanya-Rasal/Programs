
package FC_Java_InterviewQues;

public class binarysearch {
	public static int binary(int a[],int key) {
		int low=a[0];
		int high=a[a.length-1];
		
		while(low<=high) {
			 int mid=(low+high)/2;
			 if(a[mid]==key) {
				 return mid;
			 }
			 else if(key>=a[mid]) {
				 low=mid+1;
			 }
			 else if(key<a[mid]) {
				 high=mid-1;
			 }
		}
		return -1;
	}
	public static void main(String[] args) {
		int a[]= {1,2,3,4,5,6,7};
		int key=6;
		System.out.println("Element is present at "+binarysearch.binary(a, key)+" Index");
    
		
	}

}
