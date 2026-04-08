package com.program.a;

public class Customer {
	private int Cid;
	private String Cname;
	public int getCid() {
		return Cid;
	}
	public void setCid(int cid) {
		Cid = cid;
	}
	public String getCname() {
		return Cname;
	}
	public void setCname(String cname) {
		Cname = cname;
	}
	 public void show() {
		 System.out.println("Customer id " +Cid);
		 System.out.println("Customer Name " +Cname);
		 
	 }
}
