import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		
		int p1 = in.nextInt();
		int p2 = in.nextInt();
		int p3 = in.nextInt();				
		int p4 = in.nextInt();
		
		int count = 0;
		
		int arr[] = {p1,p2,p3,p4};
		
		for(int i = 0; i < 4; i++){
		    if(arr[i] >= 10){
		        count++;
		    }
		}
		System.out.println(count);
	}
}
