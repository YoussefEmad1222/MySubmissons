import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.awt.Point;

public class Main
{
  public static void main (String[]args)
  {
    Scanner sc = new Scanner (System.in);
    String n = sc.nextLine();
    char[] x = sc.nextLine ().toCharArray ();
    char prev = x[0];
    String NoDouble = "" ;
    for (int i = 0; i < x.length; i++)
      {
	if (prev != x[i]){
	    NoDouble = NoDouble + Character.toString (prev);
	  }
	  prev=x[i];
    }
    System.out.println (NoDouble.length()+1);
  }
}
