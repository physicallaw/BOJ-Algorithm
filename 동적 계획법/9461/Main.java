import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		long[] arr = new long[101];
		arr[0] = 0;
		arr[1] = 1;
		arr[2] = 1;
		arr[3] = 1;
		arr[4] = 2;
		for (int i = 5; i < 101; ++i)
			arr[i] = arr[i - 1] + arr[i - 5];

		int n = sc.nextInt();
		for (int i = 0; i < n; ++i)
		{
			int t = sc.nextInt();
			System.out.println(arr[t]);
		}

		sc.close();
	}
}