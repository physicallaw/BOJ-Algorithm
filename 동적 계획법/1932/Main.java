import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[][] arr = new int[n][n];

		for (int i = 0; i < n; ++i)
      	for (int j = 0; j < i + 1; ++j)
	         arr[i][j] = sc.nextInt();

		for (int i = 1; i < n; ++i)
			for (int j = 0; j < i + 1; ++j)
				if (j == 0)
					arr[i][j] += arr[i - 1][j];
				else if (j == i)
					arr[i][j] += arr[i - 1][j - 1];
				else
					arr[i][j] += Math.max(arr[i - 1][j - 1], arr[i - 1][j]);

		int answer = 0;
		for (int i = 0; i < n; ++i)
      	answer = Math.max(arr[n - 1][i], answer);
   	System.out.print(answer);
		sc.close();
	}
}