package com.TaskManager.dao;

import java.util.List;
import com.TaskManager.model.Task;

public interface TaskDAO {
    void addTask(Task task);
    List<Task> getTasks(int userId);
    void updateStatus(int id);
    void deleteTask(int id);
}