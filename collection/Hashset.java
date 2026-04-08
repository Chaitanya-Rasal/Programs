package collection;

import java.util.*;

public class Hashset {
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<>();
        set.add(5);
        set.add(10);
        set.add(15);

        Iterator<Integer> it = set.iterator();

        while(it.hasNext()) {
            System.out.println(it.next());
        }
    }
}