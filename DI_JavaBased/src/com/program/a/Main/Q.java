package com.program.a.Main;

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.program.a.Customer;
import com.program.a.config.Config;

public class Q {

	public static void main(String[] args) {
		ApplicationContext context = new AnnotationConfigApplicationContext(Config.class);
		Customer c1=(Customer) context.getBean("t1");
		c1.show();
	}

}
