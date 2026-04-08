<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    // Security Guard: Check if Admin is logged in
    if (session.getAttribute("adminName") == null) {
        response.sendRedirect("index.html");
    }
    String adminName = (String) session.getAttribute("adminName");
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Admin Control Center | ExamPortal</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@400;600;800&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.1/font/bootstrap-icons.css">
    
    <style>
        body { font-family: 'Plus Jakarta Sans', sans-serif; background-color: #f1f5f9; color: #1e293b; }
        .navbar-admin { background: #fff; border-bottom: 1px solid #e2e8f0; padding: 1rem 2rem; }
        .nav-tabs { border: none; margin-bottom: 2rem; gap: 10px; }
        .nav-tabs .nav-link { border: none; border-radius: 12px; color: #64748b; font-weight: 600; padding: 12px 25px; transition: 0.3s; }
        .nav-tabs .nav-link.active { background: #6366f1; color: #fff; box-shadow: 0 10px 15px -3px rgba(99, 102, 241, 0.3); }
        .admin-card { background: #fff; border-radius: 24px; border: none; box-shadow: 0 4px 6px -1px rgba(0,0,0,0.05); padding: 2rem; }
        .table thead th { background: #f8fafc; border: none; color: #64748b; font-size: 0.8rem; text-transform: uppercase; letter-spacing: 0.05em; }
        .btn-action { width: 35px; height: 35px; display: inline-flex; align-items: center; justify-content: center; border-radius: 10px; transition: 0.2s; }
        .btn-edit { background: #eff6ff; color: #3b82f6; border: none; }
        .btn-delete { background: #fef2f2; color: #ef4444; border: none; }
        .btn-edit:hover { background: #3b82f6; color: #fff; }
        .btn-delete:hover { background: #ef4444; color: #fff; }
    </style>
</head>
<body>

<nav class="navbar-admin d-flex justify-content-between align-items-center sticky-top">
    <h4 class="fw-800 text-primary mb-0">ExamPortal <span class="text-dark">Admin</span></h4>
    <div class="d-flex align-items-center gap-3">
        <span class="fw-600">Hello, <%= adminName %></span>
        <a href="Logout.jsp" class="btn btn-outline-danger btn-sm rounded-pill px-3">Logout</a>
    </div>
</nav>

<div class="container py-5">
    <ul class="nav nav-tabs justify-content-center" id="adminTab" role="tablist">
        <li class="nav-item">
            <button class="nav-link active" data-bs-toggle="tab" data-bs-target="#students"><i class="bi bi-people-fill me-2"></i> Students</button>
        </li>
        <li class="nav-item">
            <button class="nav-link" data-bs-toggle="tab" data-bs-target="#trainers"><i class="bi bi-person-badge-fill me-2"></i> Trainer Approvals</button>
        </li>
    </ul>

    <div class="tab-content">
        <div class="tab-pane fade show active" id="students">
            <div class="admin-card">
                <div class="d-flex justify-content-between align-items-center mb-4">
                    <h5 class="fw-800 mb-0">Registered Students</h5>
                    <button class="btn btn-primary btn-sm rounded-pill px-3" onclick="window.print()"><i class="bi bi-printer me-2"></i> Report</button>
                </div>
                <div class="table-responsive">
                    <table class="table table-hover align-middle">
                        <thead>
                            <tr>
                                <th>Name</th>
                                <th>Course</th>
                                <th>Email</th>
                                <th>Mobile</th>
                                <th class="text-end">Actions</th>
                            </tr>
                        </thead>
                        <tbody>
                            <%
                                try {
                                    Class.forName("org.postgresql.Driver");
                                    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                                    Statement st = con.createStatement();
                                    ResultSet rs = st.executeQuery("SELECT * FROM StudentRegistration ORDER BY sid DESC");
                                    while(rs.next()) {
                            %>
                            <tr>
                                <td class="fw-600"><%= rs.getString("sname") %></td>
                                <td><span class="badge bg-light text-primary rounded-pill px-3"><%= rs.getString("scourse") %></span></td>
                                <td class="text-muted"><%= rs.getString("semail") %></td>
                                <td><%= rs.getString("smobile") %></td>
                                <td class="text-end">
                                    <a href="EditStudent.jsp?id=<%= rs.getInt("sid") %>" class="btn-action btn-edit me-1" title="Edit"><i class="bi bi-pencil-square"></i></a>
                                    <a href="DeleteStudent.jsp?id=<%= rs.getInt("sid") %>" onclick="return confirm('Are you sure?')" class="btn-action btn-delete" title="Delete"><i class="bi bi-trash3-fill"></i></a>
                                </td>
                            </tr>
                            <% } con.close(); } catch(Exception e) { out.println(e); } %>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>

        <div class="tab-pane fade" id="trainers">
    <div class="admin-card">
        <div class="d-flex justify-content-between align-items-center mb-4">
            <h5 class="fw-800 mb-0">Trainer Management</h5>
            <span class="badge bg-primary rounded-pill px-3">Total Registry</span>
        </div>
        <div class="table-responsive">
            <table class="table table-hover align-middle">
                <thead>
                    <tr>
                        <th>Trainer Name</th>
                        <th>Specialization</th>
                        <th>Email</th>
                        <th>Status</th>
                        <th class="text-end">Actions</th>
                    </tr>
                </thead>
                <tbody>
                    <%
                        try {
                            Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                            // Removed the WHERE clause to show ALL trainers
                            Statement st = con.createStatement();
                            ResultSet rs = st.executeQuery("SELECT * FROM TrainerRegistration ORDER BY is_approved ASC, tname ASC");
                            
                            while(rs.next()) {
                                boolean approved = rs.getBoolean("is_approved");
                    %>
                    <tr>
                        <td class="fw-600">
                            <i class="bi bi-person-circle me-2 text-secondary"></i>
                            <%= rs.getString("tname") %>
                        </td>
                        <td>
                            <span class="badge bg-soft-info text-info border border-info-subtle px-3">
                                <%= rs.getString("specialization") %>
                            </span>
                        </td>
                        <td class="text-muted"><%= rs.getString("temail") %></td>
                        <td>
                            <% if(approved) { %>
                                <span class="badge bg-success-subtle text-success border border-success-subtle rounded-pill px-3">
                                    <i class="bi bi-check-circle-fill me-1"></i> Active
                                </span>
                            <% } else { %>
                                <span class="badge bg-warning-subtle text-warning border border-warning-subtle rounded-pill px-3">
                                    <i class="bi bi-clock-history me-1"></i> Pending
                                </span>
                            <% } %>
                        </td>
                        <td class="text-end">
                            <% if(!approved) { %>
                                <a href="ApproveTrainer.jsp?id=<%= rs.getInt("tid") %>" 
                                   class="btn btn-success btn-sm rounded-pill px-3 fw-600">
                                   Approve
                                </a>
                            <% } else { %>
                                <a href="RevokeTrainer.jsp?id=<%= rs.getInt("tid") %>" 
                                   class="btn btn-outline-danger btn-sm rounded-pill px-3"
                                   onclick="return confirm('Are you sure you want to revoke access?')">
                                   Revoke
                                </a>
                            <% } %>
                            <a href="DeleteTrainer.jsp?id=<%= rs.getInt("tid") %>" 
                               class="btn-action btn-delete ms-2" 
                               onclick="return confirm('Permanently delete this trainer?')">
                               <i class="bi bi-trash3"></i>
                            </a>
                        </td>
                    </tr>
                    <% 
                            } 
                            con.close(); 
                        } catch(Exception e) { 
                            out.println("<tr><td colspan='5' class='text-danger'>Error: " + e.getMessage() + "</td></tr>"); 
                        } 
                    %>
                </tbody>
            </table>
        </div>
    </div>
</div>
</div>
</div>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>