import java.util.*;
import java.lang.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
             Scanner in = new Scanner(System.in);
             
             int t = in.nextInt();
             
             while(t--> 0){
                 int n = in.nextInt();
                 
                 int prod = 1;
                 
                 for(int i = 1; i <= n; i++){
                     prod*=i;
                 }
	    System.out.println(prod);             
             }
	}
}
