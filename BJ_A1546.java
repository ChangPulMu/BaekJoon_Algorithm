import java.util.Scanner;

public class BJ_A1546
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int count = sc.nextInt(), max = 0, sum;
		int[] grade = new int[count];
		
		for(int i=0;i<count;i++)
		{
			grade[i] = sc.nextInt();
			if(grade[i]>max)
				max = grade[i];
		}
		
		for(int i=0;i<count;i++)
		{
			grade[i] = grade[i]/max
		}
	}
}
