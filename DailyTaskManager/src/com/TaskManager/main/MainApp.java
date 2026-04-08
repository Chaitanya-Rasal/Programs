package com.TaskManager.main;

import java.util.Scanner;
import com.TaskManager.service.*;
import com.TaskManager.util.SessionManager;


public class MainApp {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        UserService userService = new UserServiceImpl();
        TaskService taskService = new TaskServiceImpl();

        while(true) {
            System.out.println("-------Daily Task Manager-------");
            System.out.println("\n1.Register \n2.Login");
            int ch = sc.nextInt();

            switch(ch) {
                case 1: userService.register();
                		break;

                case 2:
                    if(userService.login()) {
                    	System.out.println("Welcome , "+SessionManager.getUserName());
                        boolean isLoggedIn = true;

                        while(isLoggedIn) {
                        	
                            System.out.println("\n1.Add \n2.View \n3.Complete \n4.Delete \n5.Logout");
                            int c = sc.nextInt();

                            switch(c) {
                                case 1: taskService.addTask(); break;
                                case 2: taskService.viewTasks(); break;
                                case 3: taskService.completeTask(); break;
                                case 4: taskService.deleteTask(); break;

                                case 5:
                                    SessionManager.logout();
                                    System.out.println("Logged out!");
                                    isLoggedIn = false;
                                    break;
                            }
                        }
                    }
                    break;

                default : System.out.println("Enter Correct Choice !!!");
            }

        }
    }
}