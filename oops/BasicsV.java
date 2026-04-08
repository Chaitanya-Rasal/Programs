package oops;
class Student{
	int sid;
	String sname;
	
	Student(int x, String y){
		this.sid=x;
		this.sname=y;
	}
	Student(Student a){
		this.sid=a.sid;
		this.sname=a.sname;
	}
}
public class BasicsV {

	public static void main(String[] args) {
		Student s1=new Student(101,"cr");
		Student S2=new Student(s1);
		System.out.println(S2.sid+"  "+S2.sname);
	}

}
