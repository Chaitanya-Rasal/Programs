package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class Deleteoperation {
public static void main(String[] args) throws ClassNotFoundException, SQLException {
	Class.forName("org.postgresql.Driver");
	System.out.println("driver load");
	String url="jdbc:postgresql://localhost:5432/jdbc";
	String username="postgres";
	String password="root";
	Connection con=DriverManager.getConnection(url,username,password);
	System.out.println("connection is created");
	Statement st=con.createStatement();
	
	String delete="delete from student where id=1";
	st.executeUpdate(delete);
	System.out.println("record deleted");
	
	String update="update student set id=3 where id=2";
	st.executeUpdate(update);
	//5.close connection
	con.close();
	
	
}
}
