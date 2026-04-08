package oops;

public class Default_constructor {
	Default_constructor(){
		System.out.println("hello default constructor");
	}
	Default_constructor(int i){
		System.out.println("hello Parametarized constructor  "+i);
	}
	
	public static void main(String[] args) {
		Default_constructor dc=new Default_constructor(1);
}
}
