package practical;

import java.util.*;
import java.util.Iterator;
import java.util.List;

public class iterator {

	public static void main(String[] args) {
		List l1=new ArrayList();
		l1.add(0, 2);
		
		Iterator a= l1.iterator();
		while(a.hasNext()) {
			System.out.println(a.next());
		}
	}

}
