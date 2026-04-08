package collection;

import java.util.*;

public class Listiterator {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("A");
        list.add("B");

        ListIterator<String> it = list.listIterator();

        while(it.hasNext()) {
            System.out.println(it.next());
        }

        while(it.hasPrevious()) {
            System.out.println(it.previous());
        }
    }
}