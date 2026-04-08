package FileHandling;
import java.io.File;
import java.io.IOException;
public class filetask  {
public static void main(String[] args) throws IOException{
	File f=new File("D:\\m.txt");
	if(f.createNewFile()) {
		System.out.println("File Created !");
	}
	else {
		System.out.println("File already Exist");
	}
}
}
