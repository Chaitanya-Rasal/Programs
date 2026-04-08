package oops;

public class Multilevel_inheritance extends parents{
	void child(){
		 System.out.println("child");
	 }
	public static void main(String[] args) {
		Multilevel_inheritance mi=new Multilevel_inheritance();
		mi.child();
		mi.parent1();
		mi.grandparent1();
	}
	
}
class parents extends grandparent{
	void parent1(){
		 System.out.println("parent");
	 }
}
class grandparent{
	void grandparent1(){
		 System.out.println("grandparent");
	 }
	
}
