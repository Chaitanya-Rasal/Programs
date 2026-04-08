package com.program.a.config;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

import com.program.a.Customer;

@Configuration
public class Config {
	@Bean
	public Customer t1() {
		Customer c1=new Customer();
		c1.setCid(1);
		c1.setCname("cr");
		return c1;
	}

}
