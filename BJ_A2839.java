import java.util.Scanner;

public class BJ_A2839
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		int num, ans = 0, tmp;
		
		num = sc.nextInt();
		tmp = num;
		
		while(true)
		{
			if(tmp % 3 == 0 && tmp < 15)
			{
				ans += tmp / 3;
				break;
			}
			
			tmp -= 5;
			ans += 1;
			
			if(tmp == 0)
				break;
			else if(tmp < 0)
			{
				ans = 0;
				break;
			}
		}
		
		if(num % 3 == 0 && ans == 0)
			ans += num / 3;
		
		if(ans == 0)
			ans = -1;
		
		System.out.println(ans);
	}
}
