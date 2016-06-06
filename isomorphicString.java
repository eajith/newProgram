
import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input=new Scanner(System.in);
		String a,b;
		a=input.next();
		b=input.next();
		int h[]=new int[26],i;
		int h1[]=new int[26];
		Arrays.fill(h,0);
		Arrays.fill(h1,0);
		for(i=0;i<a.length();i++){
			h[a.charAt(i)-'a']++;
		}
		for(i=0;i<b.length();i++){
			h1[b.charAt(i)-'a']++;
		}
		Arrays.sort(h);
		Arrays.sort(h1);
		int count=0;
		for(i=0;i<26;i++){
			if(h[i]!=h1[i]){
				count=-1;
				System.out.println("NO");
				break;
			}
		}
		if(count!=-1){
			System.out.println("Yes");
		}
	}
}
