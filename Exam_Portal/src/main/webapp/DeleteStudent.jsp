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
    int id = Integer.parseInt(request.getParameter("id"));
    Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
    PreparedStatement ps = con.prepareStatement("DELETE FROM StudentRegistration WHERE sid = ?");
    ps.setInt(1, id);
    ps.executeUpdate();
    response.sendRedirect("AdminDashboard.jsp");
%>
</body>
</html>