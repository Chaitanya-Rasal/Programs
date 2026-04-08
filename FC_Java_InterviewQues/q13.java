//Write Java program to find the duplicate words in a string?
package FC_Java_InterviewQues;
import java.util.HashSet;
import java.util.Scanner;

public class q13 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence:");
        String input = sc.nextLine().toLowerCase();

        String[] words = input.split("\\s+");

        HashSet<String> seen = new HashSet<>();
        HashSet<String> duplicate = new HashSet<>();

        for (String word : words) {
            if (!seen.add(word)) {
                duplicate.add(word);
            }
        }

        System.out.println("Duplicate words: " + duplicate);
        sc.close();
    }
}