package oops;
class parent1{
	public void surname() {
		System.out.println("xyz");
	}
	 public void pname() {
		System.out.println("b");
	}
}
class child1 extends parent1{
	public void name() {
		System.out.println("a");
	}
}
public class Single_InheritanceV {
	public static void main(String[] args) {
		child1 n=new child1();
		n.name();
		n.pname();
		n.surname();
	}

}
