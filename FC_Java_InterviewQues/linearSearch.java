package FC_Java_InterviewQues;

public class linearSearch {
	public int Linear(int a[],int key) {
		for(int i=0;i<a.length;i++)
		{	
			if(a[i]==key)
			return i;
		} 
			return 0;
		
	}
	public static void main(String[] args) {
		int a[]= {1,2,3,4,5};
		int key = 5;
		
		linearSearch ls=new linearSearch();
		int n=ls.Linear(a, key);
		if(n==1) {
			System.out.println("Element is present at "+n+"position");
		}
		else {
			System.out.println("Not Present");
		}
		
	}

}
