import java.util.Scanner;

public class BJ_A11720
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int count = sc.nextInt(), sum = 0;
		sc.nextLine();
		String num = sc.nextLine();
		char[] cnum = num.toCharArray();
		
		for(int i=0;i<count;i++)
			sum += cnum[i] - '0';
		
		System.out.println(sum);
	}
}
