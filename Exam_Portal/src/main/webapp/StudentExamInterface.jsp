<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    Integer sId = (Integer) session.getAttribute("studentId");
    String eidStr = request.getParameter("eid");
    if(sId == null || eidStr == null) { response.sendRedirect("StudentDashboard.jsp"); return; }
    int eid = Integer.parseInt(eidStr);

    // SECURITY: Server-side check for duplicate attempt
    try {
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement psCheck = con.prepareStatement("SELECT sid FROM ExamResults WHERE student_id=? AND exam_id=?");
        psCheck.setInt(1, sId); psCheck.setInt(2, eid);
        if(psCheck.executeQuery().next()){ response.sendRedirect("StudentDashboard.jsp?error=already_attempted"); return; }
        con.close();
    } catch(Exception e){ }
%>
<!DOCTYPE html>
<html>
<head>
    <title>Exam Mode</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <style>
        .timer { position: fixed; top: 20px; right: 20px; background: #ef4444; color: white; padding: 12px 25px; border-radius: 50px; font-weight: bold; }
        body { user-select: none; background: #f1f5f9; }
    </style>
</head>
<body class="p-5">
    <div class="timer">Time Left: <span id="clock">00:00</span></div>
    <div class="container bg-white p-5 rounded-4 shadow">
        <form id="examForm" action="SubmitExam.jsp" method="post">
            <input type="hidden" name="eid" value="<%= eid %>">
            <%
                try {
                    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
                    PreparedStatement ps = con.prepareStatement("SELECT * FROM Questions WHERE exam_id = ?");
                    ps.setInt(1, eid);
                    ResultSet rs = ps.executeQuery();
                    int i = 1;
                    while(rs.next()){
                        int qid = rs.getInt("qid");
            %>
            <div class="mb-4 border-bottom pb-4">
                <h5 class="fw-bold">Q<%= i++ %>: <%= rs.getString("question_text") %></h5>
                <div class="ms-3 mt-3">
                    <div class="form-check mb-2"><input class="form-check-input" type="radio" name="q_<%= qid %>" value="A"> A. <%= rs.getString("option_a") %></div>
                    <div class="form-check mb-2"><input class="form-check-input" type="radio" name="q_<%= qid %>" value="B"> B. <%= rs.getString("option_b") %></div>
                    <div class="form-check mb-2"><input class="form-check-input" type="radio" name="q_<%= qid %>" value="C"> C. <%= rs.getString("option_c") %></div>
                    <div class="form-check mb-2"><input class="form-check-input" type="radio" name="q_<%= qid %>" value="D"> D. <%= rs.getString("option_d") %></div>
                </div>
            </div>
            <% } con.close(); } catch(Exception e){ } %>
            <button type="submit" class="btn btn-success btn-lg px-5">Submit Exam</button>
        </form>
    </div>

    <script>
        // Anti-Cheat: Detect tab change
        window.onblur = function() {
            alert("Security Violation: You left the exam tab. Your answers are being submitted automatically.");
            document.getElementById('examForm').submit();
        };

        // Timer (30 minutes)
        let time = 30 * 60;
        setInterval(() => {
            let m = Math.floor(time/60); let s = time%60;
            document.getElementById('clock').innerText = m + ":" + (s<10?'0':'') + s;
            if(time <= 0) document.getElementById('examForm').submit();
            time--;
        }, 1000);
    </script>
</body>
</html>