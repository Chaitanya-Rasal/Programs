package practical;

public class swap {

	public static void main(String[] args) {
		int a=10,b=20;
		System.out.println("Before Swapping A:"+a+" B:"+b);
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("After Swapping A:"+a+" B:"+b);
	}

}
