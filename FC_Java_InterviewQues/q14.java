//.Find the count for the occurrence of a particular character in a 
//string.
package FC_Java_InterviewQues;

public class q14 {

	public static void main(String[] args) {
		String name="chaitanya";
		int cnt=0;
		char a='c';
		for(int i=0;i<name.length();i++) {
			if(name.charAt(i)==a) {
				cnt++;
			}
		}
		System.out.println("Occurance of char "+a+" is "+cnt);
	}

}
