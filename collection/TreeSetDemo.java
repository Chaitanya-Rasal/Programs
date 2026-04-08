package collection;

import java.util.Iterator;
import java.util.TreeSet;

public class TreeSetDemo {
	public static void main(String[] args) throws InterruptedException {
		TreeSet<String> ts=new TreeSet<>();
		ts.add("x");
		ts.add("k");
		ts.add("d");
		ts.add("b");
		ts.add("m");
		System.out.println("values are: "+ts);
		
		System.out.println("contains a variable : "+ts.contains("a"));
		System.out.println("After decending :"+ts.descendingSet());
		System.out.println("last Element : "+ts.getLast());
		System.out.println("first Element : "+ts.first());
		System.out.println("floor :"+ts.floor("d"));
		System.out.println("Iterator : "+ts.iterator());
		System.out.println("Diaplay and remove 1 st element: "+ts.pollFirst() );
		System.out.println(ts);
		ts.remove("d");
		System.out.println(ts);
		ts.add("a");
		System.out.println(ts);
		System.out.println("subset"+ts.subSet("k", "x"));
		System.out.println("Tailset : "+ts.tailSet("m"));
		Iterator i=ts.iterator();
		while(i.hasNext()) {
			System.out.println(i.next());
			Thread.sleep(3000);
		}
	}

}
