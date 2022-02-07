import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int check = 0, answer = 0;
		int[][] arr = new int[n][2];
		for (int i = 0; i < n; ++i)
		{
			arr[i][0] = sc.nextInt();
			arr[i][1] = sc.nextInt();
		}
		Arrays.sort(arr, new java.util.Comparator<int[]>() {
			public int compare(int[] a, int[] b) {
				if (a[1] == b[1])
					return a[0] - b[0];
				return a[1] - b[1];
			}
		});

		for (int i = 0; i < n; ++i)
			if (check <= arr[i][0])
			{
				++answer;
				check = arr[i][1];
			}
		System.out.println(answer);

		sc.close();
	}
}