<%@ page import="java.sql.*" %>
<%
    String tidRaw = request.getParameter("trainerId");
    String course = request.getParameter("course");
    String title = request.getParameter("title");
    String totalQRaw = request.getParameter("totalQ");
    String durRaw = request.getParameter("duration");

    if(tidRaw == null || totalQRaw == null || durRaw == null) {
        response.sendRedirect("TrainerDashboard.jsp?err=null_values");
        return;
    }

    try {
        int tId = Integer.parseInt(tidRaw);
        int totalQ = Integer.parseInt(totalQRaw);
        int dur = Integer.parseInt(durRaw);

        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("INSERT INTO Exams (trainer_id, course_name, exam_title, total_questions, duration_mins) VALUES (?,?,?,?,?)");
        ps.setInt(1, tId);
        ps.setString(2, course);
        ps.setString(3, title);
        ps.setInt(4, totalQ);
        ps.setInt(5, dur);
        ps.executeUpdate();
        con.close();
        response.sendRedirect("TrainerDashboard.jsp?msg=created");
    } catch(Exception e) { out.println(e); }
%>