import java.io.*;

public class BJ_A9498
{
	public static void main(String[] args) throws IOException
	{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String tmp = br.readLine();
		int grade = Integer.parseInt(tmp);
		
		if(grade>=90)
			bw.write("A");
		else if(grade>=80)
			bw.write("B");
		else if(grade>=70)
			bw.write("C");
		else if(grade>=60)
			bw.write("D");
		else
			bw.write("F");
		
		br.close();
		bw.close();
	}
}
