package com.TaskManager.dao;

import java.sql.*;
import java.util.*;
import com.TaskManager.model.Task;
import com.TaskManager.util.DBConnection;

public class TaskDAOImpl implements TaskDAO {

    public void addTask(Task task) {
        try {
            Connection con = DBConnection.getConnection();
            String q = "INSERT INTO tasks(user_id,title,description,status,priority,due_date) VALUES (?,?,?,?,?,?)";

            PreparedStatement ps = con.prepareStatement(q);
            ps.setInt(1, task.getUserId());
            ps.setString(2, task.getTitle());
            ps.setString(3, task.getDescription());
            ps.setString(4, task.getStatus());
            ps.setString(5, task.getPriority());
            ps.setDate(6, task.getDueDate());

            ps.executeUpdate();
            System.out.println("Task Added!");

        } catch(Exception e) {
            e.printStackTrace();
        }
    }

    public List<Task> getTasks(int userId) {
        List<Task> list = new ArrayList<>();

        try {
            Connection con = DBConnection.getConnection();
            String q = "SELECT * FROM tasks WHERE user_id=?";

            PreparedStatement ps = con.prepareStatement(q);
            ps.setInt(1, userId);

            ResultSet rs = ps.executeQuery();

            while(rs.next()) {
                Task t = new Task();
                t.setId(rs.getInt("id"));
                t.setTitle(rs.getString("title"));
                t.setDescription(rs.getString("description"));
                t.setStatus(rs.getString("status"));
                t.setPriority(rs.getString("priority"));
                t.setDueDate(rs.getDate("due_date"));

                list.add(t);
            }

        } catch(Exception e) {
            e.printStackTrace();
        }
        return list;
    }

    public void updateStatus(int id) {
        try {
            Connection con = DBConnection.getConnection();
            String q = "UPDATE tasks SET status='Completed' WHERE id=?";

            PreparedStatement ps = con.prepareStatement(q);
            ps.setInt(1, id);

            ps.executeUpdate();
            System.out.println("Task Completed!");

        } catch(Exception e) {
            e.printStackTrace();
        }
    }

    public void deleteTask(int id) {
        try {
            Connection con = DBConnection.getConnection();
            String q = "DELETE FROM tasks WHERE id=?";

            PreparedStatement ps = con.prepareStatement(q);
            ps.setInt(1, id);

            ps.executeUpdate();
            System.out.println("Task Deleted!");

        } catch(Exception e) {
            e.printStackTrace();
        }
    }
}