import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[][] arr = new int[31][31];
		for (int i = 0; i < 31; ++i)
   	{
      	arr[i][0] = 1;
			arr[i][i] = 1;
      	for (int j = 1; j < i; ++j)
         	arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
   	}
		int t = sc.nextInt();
		for (int i = 0; i < t; ++i)
		{
			int k = sc.nextInt();
			int n = sc.nextInt();
			System.out.println(arr[n][k]);
		}

		sc.close();
	}
}