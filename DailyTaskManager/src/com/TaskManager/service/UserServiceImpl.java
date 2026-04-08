package com.TaskManager.service;

import java.util.Scanner;
import com.TaskManager.dao.*;
import com.TaskManager.model.User;
import com.TaskManager.util.SessionManager;

public class UserServiceImpl implements UserService {

    Scanner sc = new Scanner(System.in);
    UserDAO dao = new UserDAOImpl();
    
    private boolean isValidPassword(String password) {
        String regex = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@#$%^&+=]).{8,}$";
        return password.matches(regex);
    }
    public void register() {
        System.out.print("Username: ");
        String u = sc.next();
        System.out.print("Password: ");
        String p = sc.next();
        if (!isValidPassword(p)) {
            System.out.println("Weak Password!");
            System.out.println("Password must contain:");
            System.out.println("- At least 8 characters");
            System.out.println("- 1 uppercase letter");
            System.out.println("- 1 lowercase letter");
            System.out.println("- 1 number");
            System.out.println("- 1 special character (@#$%^&+=)");
            return;
        }
        if(dao.register(new User(u,p)))
            System.out.println("Registered!");
    }

    public boolean login() {
        System.out.print("Username: ");
        String u = sc.next();
        System.out.print("Password: ");
        String p = sc.next();
        int id = dao.login(u,p);

        if(id > 0) {
            SessionManager.setUser(id);
            SessionManager.setUserName(u);

            System.out.println("Login Successful!");
            return true;
        }
        System.out.println("Invalid Credentials!");
        return false;
    }
}