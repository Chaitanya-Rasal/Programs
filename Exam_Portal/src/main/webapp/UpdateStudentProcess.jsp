<%@ page import="java.sql.*" %>
<%
    String id = request.getParameter("sid");
    String name = request.getParameter("sname");
    String course = request.getParameter("scourse");
    String email = request.getParameter("semail");
    String mobile = request.getParameter("smobile");

    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        
        String sql = "UPDATE StudentRegistration SET sname=?, scourse=?, semail=?, smobile=? WHERE sid=?";
        PreparedStatement ps = con.prepareStatement(sql);
        ps.setString(1, name);
        ps.setString(2, course);
        ps.setString(3, email);
        ps.setString(4, mobile);
        ps.setInt(5, Integer.parseInt(id));
        
        ps.executeUpdate();
        con.close();
        
        response.sendRedirect("AdminDashboard.jsp?status=updated");
    } catch(Exception e) {
        out.println(e);
    }
%>