import java.util.Scanner;
import java.lang.String;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int answer = 0;
		String s = sc.next();
		String[] arr = s.split("\\-");
		for (int i = 0; i < arr.length; ++i)
		{
			int t = 0;
			String[] temp = arr[i].split("\\+");
			for (int j = 0; j < temp.length; ++j)
				t += Integer.parseInt(temp[j]);
			if (i > 0) answer -= t;
			else answer += t;
		}
		System.out.println(answer);
		
		sc.close();
	}
}