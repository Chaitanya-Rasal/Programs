//How do you find the missing number in a given integer array of 1 to 100?
package FC_Java_InterviewQues;

public class q15 {

	public static void main(String[] args) {
		int s=0,sum=0,n=100;
        int index = 0;

		int []a= new int[99];
		s = n*(n+1)/2;
		System.out.println("Total "+s);
		for(int i=1;i<=n;i++) {
			if(i==58)
				continue;
			a[index++]=i;
			
		}
		for(int m:a) {
			sum+=m;
		}
		System.out.println("Missing Number "+ (s-sum));
	}

}
