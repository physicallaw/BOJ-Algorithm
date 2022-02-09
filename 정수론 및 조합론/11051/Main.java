import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int k = sc.nextInt();
		int[][] arr = new int[n + 1][n + 1];

		for (int i = 0; i <= n; ++i)
   	{
      	arr[i][0] = 1;
			arr[i][i] = 1;
      	for (int j = 1; j < i; ++j)
         	arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
   	}
   	System.out.print(arr[n][k]);

		sc.close();
	}
}