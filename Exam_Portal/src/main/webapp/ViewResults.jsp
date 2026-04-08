<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    Integer sId = (Integer) session.getAttribute("studentId");
    if (sId == null) { response.sendRedirect("index.html"); return; }
%>
<!DOCTYPE html>
<html>
<head>
    <title>My Results</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.1/font/bootstrap-icons.css">
    <style>body { background: #f8fafc; font-family: sans-serif; }</style>
</head>
<body class="p-5">
    <div class="container bg-white p-5 rounded-4 shadow-sm">
        <div class="d-flex justify-content-between mb-5">
            <h2 class="fw-bold text-primary">Academic Results</h2>
            <a href="StudentDashboard.jsp" class="btn btn-outline-dark rounded-pill px-4">Back to Dashboard</a>
        </div>

        <table class="table table-hover align-middle">
            <thead class="table-light">
                <tr>
                    <th>Exam Name</th>
                    <th>Score</th>
                    <th>Performance</th>
                    <th>Status</th>
                    <th>Date</th>
                </tr>
            </thead>
            <tbody>
                <%
                    try {
                        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                        String sql = "SELECT e.exam_title, r.marks_obtained, r.total_marks, r.status, r.submitted_at " +
                                     "FROM ExamResults r JOIN Exams e ON r.exam_id = e.eid " +
                                     "WHERE r.student_id = ? ORDER BY r.submitted_at DESC";
                        PreparedStatement ps = con.prepareStatement(sql);
                        ps.setInt(1, sId);
                        ResultSet rs = ps.executeQuery();
                        while(rs.next()){
                            int perc = (rs.getInt("marks_obtained") * 100) / rs.getInt("total_marks");
                %>
                <tr>
                    <td class="fw-bold"><%= rs.getString("exam_title") %></td>
                    <td><%= rs.getInt("marks_obtained") %> / <%= rs.getInt("total_marks") %></td>
                    <td style="width: 200px;">
                        <div class="progress" style="height: 10px;">
                            <div class="progress-bar <%= perc >= 50 ? "bg-success" : "bg-danger" %>" style="width: <%= perc %>%"></div>
                        </div>
                    </td>
                    <td>
                        <span class="badge rounded-pill <%= rs.getString("status").equals("Passed") ? "bg-success" : "bg-danger" %>">
                            <%= rs.getString("status") %>
                        </span>
                    </td>
                    <td class="text-muted small"><%= rs.getTimestamp("submitted_at") %></td>
                </tr>
                <% } con.close(); } catch(Exception e){ } %>
            </tbody>
        </table>
    </div>
</body>
</html>