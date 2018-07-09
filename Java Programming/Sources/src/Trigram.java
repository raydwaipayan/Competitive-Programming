import java.util.*;
public class Trigram {

	public static void main(String[] args) {
		
	    	Scanner sc=new Scanner(System.in);
	    	System.out.println("Enter a string");
	    	String s=sc.nextLine();
	    	StringTokenizer tokenizer=new StringTokenizer(s,". ,!;:");
	    	int len=tokenizer.countTokens();
	    	String words[]=new String[len];
	    	int freq[]=new int[len-2];int c=0;
	    	for(int i=0;i<len-2;i++)
	    	{
	    		freq[i]=0;
	    	}
	    	String trigram[]=new String[len-2];
	    	for(int i=0;i<len;i++)
	    	{
	    		words[i]=tokenizer.nextToken();
	    	}
	    	String n[]=new String[3];
	    	for(int i=0;i<len-2;i++)
	    	{
	    		n[0]=words[i];
	    		n[1]=words[i+1];
	    		n[2]=words[i+2];
	    		for(int j=0;j<len-2;j++)
	    		{
	    			if(n[0].equals(words[j]) && n[1].equals(words[j+1]) && n[2].equals(words[j+2]))
	    			{
	    				trigram[c]=words[j]+" "+words[j+1]+" "+words[j+2];
	    				++freq[c];
	    			}
	    		}
	    		c++;
	    	}
	    	int max=0,pos=0;
	    	for(int i=0;i<len-2;i++)
	    	{
	    		if(freq[i]>max)
	    		{
	    			max=freq[i];pos=i;
	    		}
	    	}
	    	System.out.println("Max freq is :"+max);
	    	System.out.println("The trigram is: "+trigram[pos]);
		
	}

}
