import java.util.Scanner;

public class BJ_A11721
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		String str = sc.nextLine();
		char[] arr = str.toCharArray();
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]);
			if(i % 10 == 9)
				System.out.println();
		}
	}
}
