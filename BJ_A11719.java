import java.util.Scanner;

public class BJ_A11719
{
	public static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		String s = new String();
		
		while(sc.hasNextLine())	// hasNextLine() : scanner에 다른 라인이 남아있다면 true 반환
		{
			s = sc.nextLine();
			System.out.println(s);
		}
	}
}