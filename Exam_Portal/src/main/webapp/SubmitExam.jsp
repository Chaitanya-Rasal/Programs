<%@ page import="java.sql.*" %>
<%
    int examId = Integer.parseInt(request.getParameter("eid"));
    Integer studentId = (Integer) session.getAttribute("studentId");
    int correct = 0; int total = 0;

    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("SELECT qid, correct_option FROM Questions WHERE exam_id = ?");
        ps.setInt(1, examId);
        ResultSet rs = ps.executeQuery();
        
        while(rs.next()){
            total++;
            String userAns = request.getParameter("q_" + rs.getInt("qid"));
            if(userAns != null && userAns.equals(rs.getString("correct_option"))) correct++;
        }
        
        String status = (correct >= total/2) ? "Passed" : "Failed";
        PreparedStatement psRes = con.prepareStatement("INSERT INTO ExamResults (student_id, exam_id, marks_obtained, total_marks, status) VALUES (?,?,?,?,?)");
        psRes.setInt(1, studentId);
        psRes.setInt(2, examId);
        psRes.setInt(3, correct);
        psRes.setInt(4, total);
        psRes.setString(5, status);
        psRes.executeUpdate();
        
        con.close();
        response.sendRedirect("StudentDashboard.jsp?msg=done");
    } catch(Exception e){ out.println(e); }
%>