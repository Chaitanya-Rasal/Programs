<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>

<%
    // 1. Get the Trainer ID from the URL (e.g., ApproveTrainer.jsp?id=5)
    String trainerId = request.getParameter("id");

    if (trainerId != null) {
        Connection con = null;
        PreparedStatement ps = null;

        try {
            // 2. Database Connection
            Class.forName("org.postgresql.Driver");
            con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2", "postgres", "root");

            // 3. Update the Trainer's status to TRUE
            String sql = "UPDATE TrainerRegistration SET is_approved = TRUE WHERE tid = ?";
            ps = con.prepareStatement(sql);
            ps.setInt(1, Integer.parseInt(trainerId));

            int rowsUpdated = ps.executeUpdate();

            if (rowsUpdated > 0) {
                // 4. Success! Redirect back to Admin Dashboard to see the updated list
                response.sendRedirect("AdminDashboard.jsp?msg=approved");
            } else {
                response.sendRedirect("AdminDashboard.jsp?msg=error");
            }

        } catch (Exception e) {
            out.println("Error: " + e.getMessage());
            e.printStackTrace();
        } finally {
            if (ps != null) ps.close();
            if (con != null) con.close();
        }
    } else {
        // If no ID was provided, just go back
        response.sendRedirect("AdminDashboard.jsp");
    }
%>