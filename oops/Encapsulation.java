package oops;

public class Encapsulation { 
	private long Student_adhar_Number;
	private String Student_Account_Number;
	void set_AdharNumber(long a) {
		this.Student_adhar_Number=a;
	}
	long get_AdharNumber() {
		return Student_adhar_Number;
	}
	void set_AccountNumber(String a) {
		this.Student_Account_Number=a;
	}
	String get_AccountNumber() {
		return Student_Account_Number;
	}
	
public static void main(String[] args) {
	Encapsulation ob=new Encapsulation();
	ob.set_AdharNumber(828517640671l);
	ob.set_AccountNumber("#JV98RPVl");
	System.out.println("Adhar Number : "+ob.get_AdharNumber());
	System.out.println("Account Number : "+ob.get_AccountNumber());

}
}
