package jdbc;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class task {
public static void main(String[] args) throws ClassNotFoundException, SQLException {
	Scanner sc=new Scanner(System.in);
	Class.forName("org.postgresql.Driver");
	System.out.println("driver load");
	//2.create connection portnumber,username,password
	String url="jdbc:postgresql://localhost:5432/jdbc";
	String username="postgres";
	String password="root";
	
	Connection con=DriverManager.getConnection(url,username,password);
	System.out.println("connection is created");
	
//	Statement st=con.createStatement();
//	String table="create table c(id int,name varchar(20))";
//	st.executeUpdate(table);

	String a="insert into c values(?,?)";
	PreparedStatement p=con.prepareStatement(a);
	System.out.println("Enter id");
	int b=sc.nextInt();
	p.setInt(1, b);
	System.out.println("Enter  Name :");
	String aa=sc.next();
	p.setString(2,aa);
	
	p.executeUpdate();
	con.close();
}
}
