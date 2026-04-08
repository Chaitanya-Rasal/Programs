//1. How to reverse a String in Java without using reverse () function?
package FC_Java_InterviewQues;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class q1 {
	public static void main(String[] args) throws IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter string : ");
		String s2="";
		String s1=br.readLine();
		for(int i=s1.length()-1;i>=0;i--) {
			s2+=s1.charAt(i);
		}
		System.out.println("Reversed String : "+s2);
	}
}
