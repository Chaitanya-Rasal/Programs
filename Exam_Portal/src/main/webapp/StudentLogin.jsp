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
String email = request.getParameter("semail");
String pass = request.getParameter("spass");
Class.forName("org.postgresql.Driver");
Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
String sql = "SELECT * FROM StudentRegistration WHERE semail=? AND spass=?";
PreparedStatement ps = con.prepareStatement(sql);
ps.setString(1, email);
ps.setString(2, pass);

ResultSet rs = ps.executeQuery();

if (rs.next()) {
    session.setAttribute("studentName", rs.getString("sname"));
    session.setAttribute("studentEmail", rs.getString("semail"));
    session.setAttribute("studentCourse", rs.getString("scourse"));
    response.sendRedirect("StudentDashboard.jsp");
}else {
    response.sendRedirect("index.html?error=invalid");
}
%>
</body>
</html>