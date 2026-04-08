package oops;

public class person {
	String name;
	long pno;
	void walk() {
		System.out.println("Walking.....");
	}
	void speak() {
		System.out.println("Spaking.....");
	}
	public static void main(String[] args) {
		person p1=new person();
		p1.name="cr";
		p1.pno=12345l;
		p1.walk();
		p1.speak();
		
		person p2=new person();
		p2.name="sr";
		p2.pno=12308l;
		p2.walk();
		p2.speak();
		
		System.out.println(" person 1 name : "+p1.name);
		System.out.println("person 1 phoneno : "+p1.pno);
		
		System.out.println("--------------------------------------");
		System.out.println("person 2 name : "+p2.name);
		System.out.println("person 2 phoneno : "+p2.pno);
	}

}
