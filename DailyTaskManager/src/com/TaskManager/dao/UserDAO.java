package com.TaskManager.dao;

import com.TaskManager.model.User;

public interface UserDAO {
    boolean register(User user);
    int login(String username, String password);
}