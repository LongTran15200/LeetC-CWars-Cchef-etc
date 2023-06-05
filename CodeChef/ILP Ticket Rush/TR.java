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
		    
		    int n = in.nextInt();
		    int m = in.nextInt();
		    if(n > m){
		        System.out.println(n-m);
		    }else{
		        System.out.println(0);
		    }
		}
	}
}

/* Sample
Input      Output
t = 4        |
n   m        |
5   3    =   2
5   7    =   0
4   1    =   3
8   8    =   0
*/
