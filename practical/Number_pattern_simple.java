package practical;

public class Number_pattern_simple {
	public static void main(String[] args) {
		int c=0;
		for(int i=0;i<4;i++) {
			for(int j=0;j<=i;j++) {
				System.out.print(c);
				c++;
			}
			System.out.println();
		}
	}
	
}
