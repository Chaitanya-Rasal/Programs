package oops;

public class person2 {
	void walk() {
		System.out.println("walking...!");
	}
	void run() {
		walk();
		System.out.println("Running...!");
	}
	public static void main(String[] args) {
		person2 p2=new person2();
		p2.run();
	}
}
