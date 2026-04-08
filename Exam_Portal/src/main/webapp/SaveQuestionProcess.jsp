<%@ page import="java.sql.*" %>
<%
    try {
        int eid = Integer.parseInt(request.getParameter("eid"));
        String qtext = request.getParameter("qtext");
        String oa = request.getParameter("oa");
        String ob = request.getParameter("ob");
        String oc = request.getParameter("oc");
        String od = request.getParameter("od");
        String correct = request.getParameter("correct");

        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2", "postgres", "root");

        String sql = "INSERT INTO Questions (exam_id, question_text, option_a, option_b, option_c, option_d, correct_option) VALUES (?, ?, ?, ?, ?, ?, ?)";
        PreparedStatement ps = con.prepareStatement(sql);
        ps.setInt(1, eid);
        ps.setString(2, qtext);
        ps.setString(3, oa);
        ps.setString(4, ob);
        ps.setString(5, oc);
        ps.setString(6, od);
        ps.setString(7, correct);

        ps.executeUpdate();
        con.close();

        // Redirect back to add more questions for the SAME exam
        response.sendRedirect("AddQuestions.jsp?eid=" + eid + "&msg=added");

    } catch (Exception e) {
        out.println("Error: " + e.getMessage());
    }
%>