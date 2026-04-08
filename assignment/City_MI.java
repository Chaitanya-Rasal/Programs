package assignment;

public class City_MI extends state{
public static void main(String[] args) {
	
	City_MI c=new City_MI();
	c.citites();
	c.states();
	c.countries();
}
void citites() {
	System.out.println("-------Cities--------");
	System.out.println("Pune");
}
}
class state extends country{
	void states(){
		System.out.println("-------States-------");
		System.out.println("Maharashtra");
	}
}
class country{
	void countries() {
		System.out.println("-------Countries-------");
		System.out.println("India");
	}
}