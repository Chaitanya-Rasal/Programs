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
Class.forName("org.postgresql.Driver");
Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
String sql = "INSERT INTO StudentRegistration (sname, scourse, smobile, semail, spass, scpass) VALUES (?, ?, ?, ?, ?, ?)";
PreparedStatement ps = con.prepareStatement(sql);

ps.setString(1, request.getParameter("sname"));
ps.setString(2, request.getParameter("scourse"));
ps.setString(3, request.getParameter("smobile"));
ps.setString(4, request.getParameter("semail"));
ps.setString(5, request.getParameter("spass"));
ps.setString(6, request.getParameter("scpass"));

int rowInserted=ps.executeUpdate();
if(rowInserted > 0) {
    response.sendRedirect("index.html?msg=success");
}

%>

</body>
</html>