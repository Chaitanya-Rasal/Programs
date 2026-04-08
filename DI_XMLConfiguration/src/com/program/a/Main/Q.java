package com.program.a.Main;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.program.a.Student;

public class Q {

	public static void main(String[] args) {
		ApplicationContext context= new ClassPathXmlApplicationContext("com/program/a/config/applicationContext.xml");
		Student s1=(Student) context.getBean("t1");
		s1.show();
	}

}
