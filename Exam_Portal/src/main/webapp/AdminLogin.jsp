<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    String email = request.getParameter("semail");
    String pass = request.getParameter("spass");

    // Database Connection Details
    String dbUrl = "jdbc:postgresql://localhost:5432/AdvanceTask2";
    String dbUser = "postgres";
    String dbPass = "root";

    Connection con = null;
    PreparedStatement ps = null;
    ResultSet rs = null;

    try {
        Class.forName("org.postgresql.Driver");
        con = DriverManager.getConnection(dbUrl, dbUser, dbPass);

        // Query the AdminAccount table
        String sql = "SELECT * FROM AdminAccount WHERE aemail=? AND apass=?";
        ps = con.prepareStatement(sql);
        ps.setString(1, email);
        ps.setString(2, pass);

        rs = ps.executeQuery();

        if (rs.next()) {
            // Success: Set Admin Session
            session.setAttribute("adminName", rs.getString("aname"));
            session.setAttribute("adminEmail", rs.getString("aemail"));
            session.setAttribute("role", "admin");
            
            // Redirect to the Admin Dashboard
            response.sendRedirect("AdminDashboard.jsp");
        } else {
            // Failure: Back to login with error
            response.sendRedirect("index.html?error=invalid");
        }

    } catch (Exception e) {
        out.println("<div class='alert alert-danger'>Error: " + e.getMessage() + "</div>");
        e.printStackTrace();
    } finally {
        if (rs != null) rs.close();
        if (ps != null) ps.close();
        if (con != null) con.close();
    }
%>