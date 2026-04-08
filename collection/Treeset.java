package collection;
import java.util.*;

public class Treeset {
    public static void main(String[] args) {
        TreeSet<Integer> set = new TreeSet<>();
        set.add(30);
        set.add(10);
        set.add(20);

        Iterator<Integer> it = set.iterator();

        while(it.hasNext()) {
            System.out.println(it.next());
        }
    }
}