package basics;

public class operator {

	public static void main(String[] args) {
		System.out.println("comparison operator: ");
		System.out.println("equals (1==2): "+(1==2));
		System.out.println("not equals (1!=2): "+(1!=2));
		System.out.println("addition (1+2): "+(1+2));
		System.out.println("subtraction (1-2): "+(1-2));
		System.out.println("multiplication (1*2) :"+(1*2));
		System.out.println("division (1/2) :"+(1/2));
		System.out.println("modulus (1%2) :"+(1%2));
		int x=10,y=10;
		if(x==y && x==10) {
			System.out.println("true");
		}
		if(x!=y || x==10) {
			System.out.println("true");
		}
		
	}

}
