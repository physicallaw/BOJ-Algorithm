import java.util.Scanner;

public class Main {
	public static long fly(int a, int b) {
		long n = b - a, check = 0, i;
		
		for (i = 0; check < n; check += (i + 1) / 2)
			++i;
		
		return i;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int answer = 0;
		
		for (int i = 0; i < n; ++i)
		{
			String s = sc.next();
			for (int j = 0; j < s.length(); ++j)
			{
				if (s.substring(j).lastIndexOf(s.charAt(j)) != find_not(s.substring(j), s.charAt(j)) - 1)
				{
					--answer;
					break;
				}
			}
			++answer;
		}
		
		System.out.print(answer);
		sc.close();
	}
}