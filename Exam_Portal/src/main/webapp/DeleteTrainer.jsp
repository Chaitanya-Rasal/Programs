<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
        <%@ page import="java.sql.*" %>
    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
    String id = request.getParameter("id");
    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
    PreparedStatement ps = con.prepareStatement("DELETE FROM TrainerRegistration WHERE tid = ?");
    ps.setInt(1, Integer.parseInt(id));
    ps.executeUpdate();
    response.sendRedirect("AdminDashboard.jsp");
%>

</body>
</html>