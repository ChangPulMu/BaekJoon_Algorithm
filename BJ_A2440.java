import java.util.Scanner;

public class BJ_A2440
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int num = sc.nextInt();
		
		while(true)
		{
			for(int i=0;i<num;i++)
				System.out.print("*");
			
			System.out.println();
			
			num--;
			
			if(num==0)
				break;
		}
	}
}