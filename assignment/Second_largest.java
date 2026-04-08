package assignment;

public class Second_largest {
public static void main(String[] args) {
	int t=0;
	int a[]= {3,4,6,1,9};
	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			if(a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
		
	}
		System.out.println(a[5-2]);
}
}
