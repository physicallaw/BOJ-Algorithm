import java.util.Scanner;
import java.lang.Math;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();
		int[][] arr = new int[n][m];
		int answer = 999999999;

		for (int i = 0; i < n; ++i)
		{
			String s = sc.next();
			for(int j = 0; j < m; ++j)
			{
				if (s.charAt(j) == 'B')
					arr[i][j] = 0;
				else
					arr[i][j] = 1;
			}
		}
		
		for (int i = 0; i < n - 7; ++i)
		   for (int j = 0; j < m - 7; ++j)
			{
				int answer1 = 0, answer2 = 0;
				for (int k = i; k < i + 8; ++k)
					for (int l = j; l < j + 8; ++l)
					{
						answer1 += arr[k][l] ^ ((k + l) % 2);
               	answer2 += arr[k][l] ^ ((k + l + 1) % 2);
	            }
   	      answer = Math.min(Math.min(answer1, answer2), answer);
			}
		
		System.out.print(answer);
		sc.close();
	}
}