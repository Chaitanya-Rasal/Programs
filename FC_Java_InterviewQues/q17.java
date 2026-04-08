//How do you reverse an array in place in Java?
package FC_Java_InterviewQues;

public class q17 {

	public static void main(String[] args) {
		int a[]= {1,2,3,4,5};
		for (int i = 0; i < a.length / 2; i++) {

            int temp = a[i];
            a[i] = a[a.length - 1 - i];
            a[a.length - 1 - i] = temp;
        }
		for(int x:a) {
			System.out.println(x);
		}
	}

}
