package com.program.a;

import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

public class Student {
	private int Sid;
	private String Sname;
	private List<Integer> marks;
	private Map<Integer,String> map;
	public Map<Integer, String> getMap() {
		return map;
	}
	public void setMap(Map<Integer, String> map) {
		this.map = map;
	}
	public List<Integer> getMarks() {
		return marks;
	}
	public void setMarks(List<Integer> marks) {
		this.marks = marks;
	}
	public int getSid() {
		return Sid;
	}
	public void setSid(int Sid) {
		this.Sid = Sid;
	}
	public String getSname() {
		return Sname;
	}
	public void setSname(String sname) {
		Sname = sname;
	}
	public void show() {
		System.out.println("Student id"+Sid);
		System.out.println("Student name"+Sname);
		System.out.println("Sudent marks");
		Iterator i1=marks.iterator();

		while(i1.hasNext())
		{
			System.out.println(i1.next());
		}
		Iterator<Entry<Integer, String>> iterator = map.entrySet().iterator();

        while (iterator.hasNext()) {
            Entry<Integer, String> entry = iterator.next();
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }
		

	}

}
