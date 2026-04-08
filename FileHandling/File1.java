package FileHandling;
import java.io.*;
public class File1 {
public static void main(String[] args) throws IOException{
	File f=new File("D:\\v.txt");
	f.createNewFile();
	System.out.println("File created");
	System.out.println("camwrite: "+f.canWrite());
	System.out.println("canread : "+f.canWrite());
	System.out.println("exists :"+f.exists());
	System.out.println("absolutepath :"+f.getAbsolutePath());
	System.out.println("getname :"+f.getName());
	System.out.println("getpath :"+f.getPath());
	System.out.println("isfile :"+f.isFile());
	System.out.println("ishidden :"+f.isHidden());
	System.out.println("length :"+f.length());
	System.out.println("mkdir :"+f.mkdir());
	System.out.println("canread :"+f.renameTo(f));
	System.out.println("exists :"+f.getTotalSpace());
	System.out.println("delete :"+f.delete());
	
	
	
	
	
}
}
