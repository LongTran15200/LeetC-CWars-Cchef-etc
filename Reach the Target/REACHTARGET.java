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
        
        for( int i = 0; i < t; i++){
            int y = in.nextInt();
            int x = in.nextInt();
            
            System.out.println(y-x);
        }
	}
}
