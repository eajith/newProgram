

import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n,i;
		Scanner input=new Scanner(System.in);
		n=input.nextInt();
		int fact=1;
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		System.out.println(fact);
	}
}
