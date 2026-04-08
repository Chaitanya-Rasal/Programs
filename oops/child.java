package oops;

public class child extends parent{ // inheritance
	public static void main(String[] args) {
		child ch=new child();
		ch.first();
		ch.second();
	}
	void second() {
		System.out.println("child");
	}

}
