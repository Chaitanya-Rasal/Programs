//Write java program swap the two string without using 3rd variable?
package FC_Java_InterviewQues;

public class q10 {

	public static void main(String[] args) {
		String s1 = "Hello";
        String s2 = "World";

        System.out.println("Before Swap:");
        System.out.println("s1 = " + s1);
        System.out.println("s2 = " + s2);

        s1 = s1 + s2;              // HelloWorld
        s2 = s1.substring(0, s1.length() - s2.length());  // Hello
        s1 = s1.substring(s2.length());                   // World

        System.out.println("\nAfter Swap:");
        System.out.println("s1 = " + s1);
        System.out.println("s2 = " + s2);
	}

}
