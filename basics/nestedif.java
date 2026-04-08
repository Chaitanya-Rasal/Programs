package basics;
public class nestedif {

	public static void main(String[] args) {
		boolean iselectricity=true;
		boolean isswitchon=true;
		if(iselectricity==true) {
			if(isswitchon==true) {
				System.out.println("Lights on!");
			}
			else {
				System.out.println("Lights off!");
			}
		}
		else {
			System.out.println("no electricity!");
		}
	}
}
