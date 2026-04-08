package basics;
public class nonstatic_method {
	public static void main(String[] args) {
		nonstatic_method ns=new nonstatic_method();
		ns.add();
	}
	void add() {
		System.out.println(5+5);
	}
}
