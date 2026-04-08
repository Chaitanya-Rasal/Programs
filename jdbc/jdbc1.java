package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class jdbc1 {
public static void main(String[] args) throws ClassNotFoundException, SQLException {
	//1 load jdbc driver
	Class.forName("org.postgresql.Driver");
	System.out.println("driver load");
	//2.create connection portnumber,username,password
	String url="jdbc:postgresql://localhost:5432/jdbc";
	String username="postgres";
	String password="root";
	
	Connection con=DriverManager.getConnection(url,username,password);
	System.out.println("connection is created");
	
	//3.create statement
//	String insert_record="insert into student values(2)";
	Statement st=con.createStatement();
//	
//	//4.execute statement
//	st.executeUpdate(insert_record);
//	System.out.println("Value inserted>>>>");
//	
//	String delete="delete from student where id=1";
//	st.executeUpdate(delete);
//	System.out.println("record deleted");
	
	String fetch="select * from student";
	ResultSet rs=st.executeQuery(fetch);
	while(rs.next()) {
		System.out.println(rs.getInt("id")+" ");
	}
	//5.close connection
	con.close();
	
	
}
}
