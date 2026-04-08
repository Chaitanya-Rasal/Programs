<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Processing Trainer Registration...</title>
    <script src="https://cdn.jsdelivr.net/npm/sweetalert2@11"></script>
</head>
<body style="font-family: 'Plus Jakarta Sans', sans-serif;">

<%
    // 1. Capture Form Data
    String name = request.getParameter("sname");
    String spec = request.getParameter("scourse"); // 'scourse' from index.html dropdown
    String email = request.getParameter("semail");
    String pass = request.getParameter("spass");
    // Note: We used 'smobile' in the HTML, let's grab it
    String mobile = request.getParameter("smobile");

    // 2. Database Configuration
    String url = "jdbc:postgresql://localhost:5432/AdvanceTask2";
    String user = "postgres";
    String dbPass = "root";

    Connection con = null;
    PreparedStatement ps = null;

    try {
        Class.forName("org.postgresql.Driver");
        con = DriverManager.getConnection(url, user, dbPass);

        // 3. SQL Insert (is_approved defaults to false in the database)
        String sql = "INSERT INTO TrainerRegistration (tname, specialization, tmobile, temail, tpass, is_approved) VALUES (?, ?, ?, ?, ?, false)";
        
        ps = con.prepareStatement(sql);
        ps.setString(1, name);
        ps.setString(2, spec);
        ps.setString(3, mobile);
        ps.setString(4, email);
        ps.setString(5, pass);

        int result = ps.executeUpdate();

        if (result > 0) {
%>
            <script>
                Swal.fire({
                    icon: 'success',
                    title: 'Application Submitted!',
                    text: 'Hi <%= name %>, your request is sent to the Admin for approval.',
                    confirmButtonColor: '#6366f1'
                }).then((result) => {
                    window.location.href = 'index.html';
                });
            </script>
<%
        }
    } catch (Exception e) {
        // Handle Errors (like Duplicate Email)
%>
        <script>
            Swal.fire({
                icon: 'error',
                title: 'Registration Error',
                text: '<%= e.getMessage().contains("unique") ? "This email is already registered!" : "Database connection failed." %>',
                confirmButtonColor: '#6366f1'
            }).then(() => {
                window.history.back();
            });
        </script>
<%
        e.printStackTrace();
    } finally {
        if (ps != null) ps.close();
        if (con != null) con.close();
    }
%>

</body>
</html>