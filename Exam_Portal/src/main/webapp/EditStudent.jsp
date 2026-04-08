<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    // Security Guard
    if (session.getAttribute("adminName") == null) {
        response.sendRedirect("index.html");
    }

    String id = request.getParameter("id");
    String sname="", scourse="", semail="", smobile="";

    // 1. Fetch Current Data
    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("SELECT * FROM StudentRegistration WHERE sid = ?");
        ps.setInt(1, Integer.parseInt(id));
        ResultSet rs = ps.executeQuery();
        
        if(rs.next()){
            sname = rs.getString("sname");
            scourse = rs.getString("scourse");
            semail = rs.getString("semail");
            smobile = rs.getString("smobile");
        }
        con.close();
    } catch(Exception e) { e.printStackTrace(); }
%>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Edit Student | Admin Panel</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@400;600;800&display=swap" rel="stylesheet">
    <style>
        body { font-family: 'Plus Jakarta Sans', sans-serif; background: #f1f5f9; display: flex; align-items: center; justify-content: center; min-height: 100vh; }
        .edit-card { background: #fff; padding: 40px; border-radius: 24px; box-shadow: 0 20px 40px rgba(0,0,0,0.05); width: 100%; max-width: 500px; }
        .form-control { border-radius: 12px; border: 2px solid #f1f5f9; padding: 12px; }
        .btn-update { background: #6366f1; color: #fff; font-weight: 700; border-radius: 12px; width: 100%; border: none; padding: 12px; transition: 0.3s; }
        .btn-update:hover { background: #4f46e5; transform: translateY(-2px); }
    </style>
</head>
<body>

<div class="edit-card">
    <h3 class="fw-800 text-primary mb-4">Edit Student</h3>
    
    <form action="UpdateStudentProcess.jsp" method="post">
        <input type="hidden" name="sid" value="<%= id %>">

        <div class="mb-3">
            <label class="form-label fw-600">Full Name</label>
            <input type="text" name="sname" class="form-control" value="<%= sname %>" required>
        </div>

        <div class="mb-3">
            <label class="form-label fw-600">Course</label>
            <select name="scourse" class="form-select form-control">
                <option value="Java" <%= scourse.equals("Java")?"selected":"" %>>Java</option>
                <option value="Python" <%= scourse.equals("Python")?"selected":"" %>>Python</option>
                <option value=".Net" <%= scourse.equals(".Net")?"selected":"" %>>.NET</option>
                <option value="Cybersecurity" <%= scourse.equals("Cybersecurity")?"selected":"" %>>Cybersecurity</option>
            </select>
        </div>

        <div class="mb-3">
            <label class="form-label fw-600">Email Address</label>
            <input type="email" name="semail" class="form-control" value="<%= semail %>" required>
        </div>

        <div class="mb-4">
            <label class="form-label fw-600">Mobile Number</label>
            <input type="text" name="smobile" class="form-control" value="<%= smobile %>" required>
        </div>

        <button type="submit" class="btn btn-update">Save Changes</button>
        <div class="text-center mt-3">
            <a href="AdminDashboard.jsp" class="text-muted text-decoration-none small fw-600">Cancel and Go Back</a>
        </div>
    </form>
</div>

</body>
</html>