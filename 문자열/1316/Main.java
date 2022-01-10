import java.util.Scanner;

public class Main {
	public static int find_not(String s, char c) {
		for (int i = 0; i < s.length(); ++i)
			if (s.charAt(i) != c)
				return i;
		return s.length();
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