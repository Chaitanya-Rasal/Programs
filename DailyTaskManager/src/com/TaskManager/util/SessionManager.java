package com.TaskManager.util;

public class SessionManager {
    private static int userId;
    private static String userName;

    public static String getUserName() {
		return userName;
	}

	public static void setUserName(String userName) {
		SessionManager.userName = userName;
	}

	public static void setUser(int id) {
        userId = id;
    }

    public static int getUser() {
        return userId;
    }

    public static void logout() {
        userId = 0;
    }
}