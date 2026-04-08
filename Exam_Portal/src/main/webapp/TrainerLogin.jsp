<%@ page import="java.sql.*" %>
<%
    String email = request.getParameter("semail");
    String pass = request.getParameter("spass");
    try {
        Class.forName("org.postgresql.Driver");
        Connection con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/AdvanceTask2","postgres","root");
        PreparedStatement ps = con.prepareStatement("SELECT * FROM TrainerRegistration WHERE temail=? AND tpass=?");
        ps.setString(1, email); ps.setString(2, pass);
        ResultSet rs = ps.executeQuery();
        if(rs.next()) {
            if(!rs.getBoolean("is_approved")) {
                response.sendRedirect("index.html?error=pending");
            } else {
            	session.setAttribute("trainerEmail", rs.getString("temail"));
            	session.setAttribute("trainerName", rs.getString("tname"));
                session.setAttribute("trainerName", rs.getString("tname"));
                response.sendRedirect("TrainerDashboard.jsp");
            }
        } else { response.sendRedirect("index.html?error=invalid"); }
        con.close();
    } catch(Exception e) { out.println(e); }
%>