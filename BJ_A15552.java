import java.io.*;
import java.util.StringTokenizer;

public class BJ_A15552	// 좀 더 공부해야할 부분임
{	
	public static void main(String[] args) throws IOException
	{
		// TODO Auto-generated method stub
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String tmp = bf.readLine();
		int num = Integer.parseInt(tmp), a, b;
		StringTokenizer st;
		
		for(int i=0;i<num;i++)
		{
			tmp = bf.readLine();
			st = new StringTokenizer(tmp);
			a = Integer.parseInt(st.nextToken());
			b = Integer.parseInt(st.nextToken());
			bw.write(a+b+"\n");
		}
		
		bf.close();
		bw.close();
	}
}
