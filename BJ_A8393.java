import java.util.Scanner;

public class BJ_A8393
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int num = sc.nextInt(), sum = 0;
		
		for(int i=1;i<=num;i++)
			sum += i;
		
		System.out.println(sum);
	}
}
