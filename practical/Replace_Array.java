package practical;

public class Replace_Array {
public static void main(String[] args) {
	int ar[]= {1,0,0,1,0};
	System.out.println("Before Replacing array elements :");
	for(int i=0;i<ar.length;i++) {
		System.out.print(ar[i]+" ");
	}
	System.out.println();
	for(int i=0;i<ar.length;i++) {
		if(ar[i]==0) {
			ar[i]=1;
		}
		else {
			ar[i]=0;
		}
	}
	System.out.println("After Replacing array elements :");
	for(int i=0;i<ar.length;i++) {
		System.out.print(ar[i]+" ");
	}
	
}
}
