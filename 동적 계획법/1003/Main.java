import java.util.Scanner;

public class Main {
	public static int MAX = 41;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[][] fibonacci = new int[MAX][2];
		fibonacci[0][0] = 1;
		fibonacci[0][1] = 0;
		fibonacci[1][0] = 0;
		fibonacci[1][1] = 1;
		
		for (int i = 2; i < MAX; ++i)
		{
			fibonacci[i][0] = fibonacci[i - 2][0] + fibonacci[i - 1][0];
			fibonacci[i][1] = fibonacci[i - 2][1] + fibonacci[i - 1][1];
		}

		for (int i = 0; i < n; ++i)
		{
			int t = sc.nextInt();
			System.out.printf("%d %d\n", fibonacci[t][0], fibonacci[t][1]);
		}

		sc.close();
	}
}