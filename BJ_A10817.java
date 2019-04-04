import java.io.*;
import java.util.StringTokenizer;

public class BJ_A10817
{
	public static void main(String[] args) throws IOException
	{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st;
		int a, b, c;
		
		String tmp = br.readLine();
		st = new StringTokenizer(tmp);
		a = Integer.parseInt(st.nextToken());
		b = Integer.parseInt(st.nextToken());
		c = Integer.parseInt(st.nextToken());
		
		if((a>=b&&b>=c)||(c>=b&&b>=a))
			tmp = String.valueOf(b);
		else if((b>=a&&a>=c)||(c>=a&&a>=b))
			tmp = String.valueOf(a);
		else
			tmp = String.valueOf(c);
		
		bw.write(tmp);
		
		br.close();
		bw.close();
	}
}
