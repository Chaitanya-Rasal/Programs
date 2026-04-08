package collection;

import java.util.Iterator;
import java.util.LinkedHashSet;

public class Linkedhashset {
	    public static void main(String[] args) {
	        LinkedHashSet<String> set = new LinkedHashSet<>();
	        set.add("A");
	        set.add("B");
	        set.add("C");

	        Iterator<String> it = set.iterator();

	        while(it.hasNext()) {
	            System.out.println(it.next());
	        }
	    }
	}

