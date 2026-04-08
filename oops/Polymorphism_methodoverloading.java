package oops;
public class Polymorphism_methodoverloading {
	public static void main(String[] args) {
		Polymorphism_methodoverloading o=new Polymorphism_methodoverloading();
		o.area(4.0f);
		o.area(4);
		o.area(4.0f, 3.0f);
		o.area(6, 4.5f);
		}
	void area(float length,float width) {
		System.out.println("Area of Rectangle : "+(length*width));
	}
	void area(int base,float height) {
		System.out.println("Area of Triangle : "+((base*height)/2));
	}
	void area(float side) {
		System.out.println("Area of Square : "+side*side);
	}
	void area(int radius) {
		System.out.println("Area of Circle : "+Math.PI*(radius*radius));
	}
}
