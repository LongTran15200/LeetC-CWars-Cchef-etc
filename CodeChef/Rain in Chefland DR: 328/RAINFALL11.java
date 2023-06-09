import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		
		int t = in.nextInt();
		
		for(int i = 0; i < t; i++){
		    int x = in.nextInt();
		    
		    if( x < 3){
		        System.out.println("LIGHT");
		    }
		    else if( x >= 7){
		        System.out.println("HEAVY");
		    }
		    else{
		        System.out.println("MODERATE");
		    }
		}
	}
}
