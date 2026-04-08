package practical;

public class Right_Rotate {
public static void main(String[] args) {
	int a[]= {1,2,3,4,5};
	int t=a[a.length-1];
	System.out.println("Before Right Rotation: ");
	for(int i=0;i<a.length;i++) {
		System.out.print(a[i]+" ");
	}
	System.out.println();
	for(int i=a.length-1;i>0;i--) {
		a[i]=a[i-1];
	}
	a[0]=t;
	System.out.println("After Right Rotation: ");
	for(int i=0;i<a.length;i++) {
		System.out.print(a[i]+" ");
	}
}
}
