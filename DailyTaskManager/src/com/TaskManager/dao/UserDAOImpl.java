package com.TaskManager.dao;

import java.sql.*;
import com.TaskManager.model.User;
import com.TaskManager.util.DBConnection;

public class UserDAOImpl implements UserDAO {

    public boolean register(User user) {
        try {
            Connection con = DBConnection.getConnection();
            String query = "INSERT INTO users(username, password) VALUES (?,?)";

            PreparedStatement ps = con.prepareStatement(query);
            ps.setString(1, user.getUsername());
            ps.setString(2, user.getPassword());

            ps.executeUpdate();
            return true;

        } catch(Exception e) {
            System.out.println("Username already exists!");
            return false;
        }
    }

    public int login(String username, String password) {
        try {
            Connection con = DBConnection.getConnection();
            String query = "SELECT * FROM users WHERE username=? AND password=?";

            PreparedStatement ps = con.prepareStatement(query);
            ps.setString(1, username);
            ps.setString(2, password);

            ResultSet rs = ps.executeQuery();

            if(rs.next()) {
                return rs.getInt("id");
            }

        } catch(Exception e) {
            e.printStackTrace();
        }
        return 0;
    }
}