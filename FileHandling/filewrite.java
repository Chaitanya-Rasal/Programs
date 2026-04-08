package FileHandling;
import java.io.*;
public class filewrite {
	public static void main(String[] args) throws IOException {
		File f=new File("D:\\z.txt");
		//f.createNewFile();
		if(f.exists()) {
			FileWriter fw=new FileWriter(f);
			fw.write("hello");
			fw.close();
			System.out.println("File Writed Successfully !");
			
		}
		}

}
