package com.TaskManager.service;

import java.sql.Date;
import java.util.*;
import com.TaskManager.dao.*;
import com.TaskManager.model.Task;
import com.TaskManager.util.SessionManager;

public class TaskServiceImpl implements TaskService {

    Scanner sc = new Scanner(System.in);
    TaskDAO dao = new TaskDAOImpl();

    public void addTask() {
        Task t = new Task();

        System.out.print("Title: ");
        t.setTitle(sc.next());
        sc.nextLine(); 
        System.out.print("Description: ");
        t.setDescription(sc.nextLine());

        System.out.print("Priority (High/Medium/Low): ");
        t.setPriority(sc.next());

        System.out.print("Due Date (yyyy-mm-dd): ");
        t.setDueDate(Date.valueOf(sc.next()));

        t.setStatus("Pending");
        t.setUserId(SessionManager.getUser());

        dao.addTask(t);
    }

    public void viewTasks() {
        List<Task> list = dao.getTasks(SessionManager.getUser());

        for(Task t : list) {
            System.out.println(t.getId()+" | "+t.getTitle()+" | "+t.getStatus()+" | "+t.getPriority()+" | "+t.getDueDate());
        }
    }

    public void completeTask() {
        System.out.print("Enter Task ID: ");
        dao.updateStatus(sc.nextInt());
    }

    public void deleteTask() {
        System.out.print("Enter Task ID: ");
        dao.deleteTask(sc.nextInt());
    }
}