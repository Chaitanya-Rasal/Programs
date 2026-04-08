<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    String tEmail = (String) session.getAttribute("trainerEmail");
    if (tEmail == null) { response.sendRedirect("index.html"); return; }
    String tName = (String) session.getAttribute("trainerName");
    String tSpec = ""; int tId = 0;

    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("SELECT tid, specialization FROM TrainerRegistration WHERE temail = ?");
        ps.setString(1, tEmail);
        ResultSet rs = ps.executeQuery();
        if(rs.next()){ tId = rs.getInt("tid"); tSpec = rs.getString("specialization"); }
        con.close();
    } catch(Exception e) { e.printStackTrace(); }
%>
<!DOCTYPE html>
<html>
<head>
    <title>Trainer Dashboard | <%= tSpec %></title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.1/font/bootstrap-icons.css">
    <style>
        body { background: #f4f7fe; font-family: 'Plus Jakarta Sans', sans-serif; }
        .main-card { background: #fff; border-radius: 15px; border: none; box-shadow: 0 4px 20px rgba(0,0,0,0.05); padding: 20px; margin-bottom: 20px; }
    </style>
</head>
<body class="p-4">
    <div class="container-fluid">
        <div class="d-flex justify-content-between mb-4">
            <h3>Welcome, <%= tName %> (<%= tSpec %>)</h3>
            <a href="Logout.jsp" class="btn btn-danger btn-sm">Logout</a>
        </div>

        <div class="row">
            <div class="col-md-3">
                <div class="main-card">
                    <h6 class="fw-bold mb-3">Create New Exam</h6>
                    <form action="CreateExamProcess.jsp" method="post">
                        <input type="hidden" name="trainerId" value="<%= tId %>">
                        <input type="hidden" name="course" value="<%= tSpec %>">
                        <input type="text" name="title" class="form-control mb-2" placeholder="Exam Title" required>
                        <input type="number" name="totalQ" class="form-control mb-2" placeholder="Total Qs" required>
                        <input type="number" name="duration" class="form-control mb-2" placeholder="Mins" required>
                        <button type="submit" class="btn btn-primary w-100">Launch Exam</button>
                    </form>
                </div>
            </div>

            <div class="col-md-9">
                <div class="main-card">
                    <h6 class="fw-bold mb-3">Student Progress & Results</h6>
                    <table class="table table-hover">
                        <thead>
                            <tr class="small text-muted">
                                <th>STUDENT</th>
                                <th>EXAM</th>
                                <th>SCORE</th>
                                <th>STATUS</th>
                                <th>DATE</th>
                            </tr>
                        </thead>
                        <tbody>
                            <%
                                try {
                                    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                                    String sql = "SELECT s.sname, e.exam_title, r.marks_obtained, r.total_marks, r.status, r.submitted_at " +
                                                 "FROM StudentRegistration s " +
                                                 "LEFT JOIN ExamResults r ON s.sid = r.student_id " +
                                                 "LEFT JOIN Exams e ON r.exam_id = e.eid " +
                                                 "WHERE s.scourse = ? ORDER BY r.submitted_at DESC";
                                    PreparedStatement ps = con.prepareStatement(sql);
                                    ps.setString(1, tSpec);
                                    ResultSet rs = ps.executeQuery();
                                    while(rs.next()){
                                        String title = rs.getString("exam_title");
                            %>
                            <tr>
                                <td><%= rs.getString("sname") %></td>
                                <td><%= (title != null) ? title : "<i>Not Attempted</i>" %></td>
                                <td><%= (title != null) ? rs.getInt("marks_obtained") + "/" + rs.getInt("total_marks") : "--" %></td>
                                <td>
                                    <span class="badge rounded-pill <%= "Passed".equals(rs.getString("status")) ? "bg-success" : "bg-secondary" %>">
                                        <%= (rs.getString("status") != null) ? rs.getString("status") : "Pending" %>
                                    </span>
                                </td>
                                <td class="small"><%= (rs.getTimestamp("submitted_at") != null) ? rs.getTimestamp("submitted_at") : "--" %></td>
                            </tr>
                            <% } con.close(); } catch(Exception e){ } %>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>
</body>
</html>