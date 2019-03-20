import java.util.Scanner;

public class BJ_A2441
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int num = sc.nextInt();
		int n = num;
		
		while(true)
		{
			for(int i=n;i<num;i++)
				System.out.print(" ");
			
			for(int i=0;i<n;i++)
				System.out.print("*");
			
			System.out.println();
			
			n--;
			
			if(n==0)
				break;
		}
	}
}