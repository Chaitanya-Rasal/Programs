package collection;

import java.util.Stack;

public class Stack_Implementation {
public static void main(String[] args) {
	Stack s=new Stack();
	s.push(34);
	s.push("a");
	s.push(2.4);
	s.push(true);
	s.push('#');
	System.out.println(s);
	s.pop();
	System.out.println(s);
	s.remove(1);
	System.out.println(s);
System.out.println(s.capacity());
System.out.println("peek: "+s.peek());
System.out.println(s.search(true));
}
}
