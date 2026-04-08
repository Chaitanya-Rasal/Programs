<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    String sEmail = (String) session.getAttribute("studentEmail");
    if (sEmail == null) { response.sendRedirect("index.html"); return; }
    String sName = (String) session.getAttribute("studentName");
    int sId = 0; String sCourse = "";

    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("SELECT sid, scourse FROM StudentRegistration WHERE semail = ?");
        ps.setString(1, sEmail);
        ResultSet rs = ps.executeQuery();
        if(rs.next()){ sId = rs.getInt("sid"); sCourse = rs.getString("scourse"); session.setAttribute("studentId", sId); }
        con.close();
    } catch(Exception e){ }
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Student Portal | <%= sName %></title>
    
    <link href="https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@400;600;800&display=swap" rel="stylesheet">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.1/font/bootstrap-icons.css">
    <script src="https://cdn.jsdelivr.net/npm/sweetalert2@11"></script>

    <style>
        :root {
            --primary: #6366f1;
            --accent: #8b5cf6;
            --bg-light: #f8fafc;
            --glass: rgba(255, 255, 255, 0.9);
        }

        body { 
            background-color: var(--bg-light); 
            font-family: 'Plus Jakarta Sans', sans-serif;
            color: #1e293b;
            overflow-x: hidden;
        }

        /* Sidebar Navigation */
        .sidebar {
            width: 280px;
            height: 100vh;
            position: fixed;
            background: #fff;
            border-right: 1px solid #e2e8f0;
            padding: 2.5rem 1.5rem;
            z-index: 100;
        }

        .main-content { margin-left: 280px; padding: 3rem; }

        /* Dashboard Components */
        .welcome-banner {
            background: linear-gradient(135deg, var(--primary) 0%, var(--accent) 100%);
            border-radius: 30px;
            padding: 40px;
            color: white;
            box-shadow: 0 10px 25px -5px rgba(99, 102, 241, 0.4);
            margin-bottom: 3rem;
        }

        .exam-card {
            border: 1px solid #e2e8f0;
            border-radius: 24px;
            background: #fff;
            padding: 2rem;
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            height: 100%;
            display: flex;
            flex-direction: column;
            justify-content: space-between;
        }

        .exam-card:hover {
            transform: translateY(-12px);
            box-shadow: 0 25px 50px -12px rgba(0, 0, 0, 0.08);
            border-color: var(--primary);
        }

        .nav-link {
            color: #64748b;
            font-weight: 600;
            padding: 14px 20px;
            border-radius: 16px;
            display: flex;
            align-items: center;
            transition: 0.2s;
            margin-bottom: 8px;
        }

        .nav-link.active {
            background: #eef2ff;
            color: var(--primary);
        }

        .nav-link:hover:not(.active) {
            background: #f1f5f9;
            color: #334155;
        }

        .btn-launch {
            background: var(--primary);
            color: white;
            border: none;
            padding: 14px;
            border-radius: 14px;
            font-weight: 700;
            width: 100%;
            transition: 0.3s;
        }

        .btn-launch:hover {
            background: #4f46e5;
            box-shadow: 0 10px 15px -3px rgba(79, 70, 229, 0.3);
        }

        .status-badge {
            font-size: 0.7rem;
            font-weight: 800;
            padding: 6px 14px;
            border-radius: 50px;
            text-transform: uppercase;
            letter-spacing: 0.5px;
        }
    </style>
</head>
<body>

<div class="sidebar">
    <div class="d-flex align-items-center mb-5 ps-3">
        <div class="bg-primary rounded-3 p-2 me-3">
            <i class="bi bi-mortarboard-fill text-white fs-4"></i>
        </div>
        <h4 class="fw-800 mb-0">EduFlow</h4>
    </div>
    
    <nav>
        <a href="StudentDashboard.jsp" class="nav-link active"><i class="bi bi-grid-1x2 me-3"></i> Dashboard</a>
        <a href="ViewResults.jsp" class="nav-link"><i class="bi bi-award me-3"></i> My Results</a>
        <a href="#" class="nav-link"><i class="bi bi-person me-3"></i> Profile</a>
        <hr class="my-4 text-muted opacity-25">
        <a href="Logout.jsp" class="nav-link text-danger"><i class="bi bi-power me-3"></i> Logout</a>
    </nav>
</div>

<div class="main-content">
    <div class="container-fluid">
        
        <div class="welcome-banner d-flex justify-content-between align-items-center">
            <div>
                <h1 class="fw-800 mb-2 text-white">Welcome back, <%= sName %>!</h1>
                <p class="mb-0 opacity-75 fs-5">Ready to crush your <strong><%= sCourse %></strong> assessments today?</p>
            </div>
            <div class="d-none d-md-block">
                <i class="bi bi-stars fs-1"></i>
            </div>
        </div>

        <div class="d-flex justify-content-between align-items-center mb-4">
            <h4 class="fw-800">Assigned Exams</h4>
            <span class="badge bg-white text-dark border px-3 py-2 rounded-pill shadow-sm">
                <i class="bi bi-funnel me-2"></i><%= sCourse %> Track
            </span>
        </div>

        <div class="row">
            <%
                try {
                    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                    PreparedStatement ps = con.prepareStatement("SELECT * FROM Exams WHERE course_name = ? ORDER BY eid DESC");
                    ps.setString(1, sCourse);
                    ResultSet rs = ps.executeQuery();
                    
                    boolean found = false;
                    while(rs.next()){
                        found = true;
                        int eid = rs.getInt("eid");
                        
                        // Check Attempt Status
                        PreparedStatement psCheck = con.prepareStatement("SELECT sid FROM ExamResults WHERE student_id=? AND exam_id=?");
                        psCheck.setInt(1, sId); psCheck.setInt(2, eid);
                        boolean isDone = psCheck.executeQuery().next();
            %>
            <div class="col-xl-4 col-md-6 mb-4">
                <div class="exam-card">
                    <div class="d-flex justify-content-between align-items-center mb-4">
                        <div class="p-3 rounded-4 bg-primary bg-opacity-10">
                            <i class="bi bi-journal-code text-primary fs-4"></i>
                        </div>
                        <% if(isDone) { %>
                            <span class="status-badge bg-success-subtle text-success">Finished</span>
                        <% } else { %>
                            <span class="status-badge bg-warning-subtle text-warning">Active</span>
                        <% } %>
                    </div>
                    
                    <h5 class="fw-800 mb-3"><%= rs.getString("exam_title") %></h5>
                    
                    <div class="row g-2 mb-4">
                        <div class="col-6">
                            <div class="p-2 border rounded-3 text-center small text-muted">
                                <i class="bi bi-clock me-1"></i> <%= rs.getInt("duration_mins") %>m
                            </div>
                        </div>
                        <div class="col-6">
                            <div class="p-2 border rounded-3 text-center small text-muted">
                                <i class="bi bi-question-circle me-1"></i> <%= rs.getInt("total_questions") %> Qs
                            </div>
                        </div>
                    </div>

                    <% if(isDone) { %>
                        <button class="btn btn-light w-100 rounded-pill text-muted fw-bold py-3" disabled>
                            <i class="bi bi-lock-fill me-2"></i>Assessment Completed
                        </button>
                    <% } else { %>
                        <a href="StudentExamInterface.jsp?eid=<%= eid %>" class="btn btn-launch text-decoration-none text-center">
                            Launch Exam <i class="bi bi-chevron-right ms-2"></i>
                        </a>
                    <% } %>
                </div>
            </div>
            <% 
                    } 
                    if(!found) {
                        out.println("<div class='col-12 text-center py-5'><div class='p-5 bg-white rounded-5 shadow-sm'><i class='bi bi-emoji-smile fs-1 text-muted'></i><p class='mt-3 text-muted fw-600'>No exams are currently active for " + sCourse + ".</p></div></div>");
                    }
                    con.close(); 
                } catch(Exception e){ } 
            %>
        </div>
    </div>
</div>

<script>
    // SweetAlert for Unauthorized Access
    const urlParams = new URLSearchParams(window.location.search);
    if(urlParams.get('error') === 'already_attempted') {
        Swal.fire({
            title: 'Unauthorized',
            text: 'Our records show you have already submitted this exam. Only one attempt is permitted.',
            icon: 'warning',
            confirmButtonColor: '#6366f1',
            padding: '2rem',
            customClass: { popup: 'rounded-5' }
        });
    }
</script>

</body>
</html>