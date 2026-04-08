<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
    String role = request.getParameter("role");
    if ("admin".equals(role)) {
        pageContext.forward("AdminLogin.jsp");
    } else if ("trainer".equals(role)) {
        pageContext.forward("TrainerLogin.jsp");
    } else {
        pageContext.forward("StudentLogin.jsp");
    }
%>

</body>
</html>