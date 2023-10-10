import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.awt.Point;


 public class Main
{
	public static void main(String[] args) {
	   Scanner sc = new Scanner(System.in);
	   String str = sc.nextLine();
	   int n= str.length() , c=1;
	   String cyc= str ;
	   
	   while(true){
	       String last=Character.toString(cyc.charAt(n-1));
	       cyc = cyc.substring(0,n-1);
           cyc = last + cyc ;
	       if(cyc.equals(str)){
	           break;
	       }
	       else{
	           c++;
	       }
	   }
	  System.out.println(c); 

	}
}