package practical;

public class Left_RotateArray {
public static void main(String[] args) {
	int a[]= {1,2,3,4,5};
	int t=a[0];
	System.out.println("Before Left Rotation: ");
	for(int i=0;i<a.length;i++) {
		System.out.print(a[i]+" ");
	}
	System.out.println();
	for(int i=0;i<a.length-1;i++) {
		a[i]=a[i+1];
	}
	a[a.length-1]=t;
	System.out.println("After Left Rotation: ");
	for(int i=0;i<a.length;i++) {
		System.out.print(a[i]+" ");
	}
}
}
