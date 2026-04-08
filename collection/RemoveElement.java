package collection;
import java.util.*;
public class RemoveElement {
   public static void main(String[] args) {
	        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(10, 20, 30, 40));

	        Iterator<Integer> it = list.iterator();

	        while(it.hasNext()) {
	            if(it.next() == 20) {
	                it.remove(); // safe removal
	            }
	        }

	        System.out.println(list);
	    }
	}

