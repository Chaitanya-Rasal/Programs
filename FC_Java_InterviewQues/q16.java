//How do you find all pairs of an integer array whose sum is equal to a 
//given number?
package FC_Java_InterviewQues;

public class q16 {

	public static void main(String[] args) {
		int a[]= {1,2,3,4,5};
		int x=5;
		for(int i=0;i<a.length;i++) {
			for(int j=1;j<a.length;j++) {
				if(a[i]+a[j]==x) {
					System.out.println("Pair a["+i+"]a["+j+"]");
				}
			}
		}
	}

}
