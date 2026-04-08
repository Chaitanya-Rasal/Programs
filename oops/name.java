package oops;

public class name {
	 String name;
public static void main(String[] args) {
	name n=new name();
	n.info("cr");
	System.out.println(n.name);
}
 void info(String name) {
	this.name=name;
	System.out.println(name);
}
}
