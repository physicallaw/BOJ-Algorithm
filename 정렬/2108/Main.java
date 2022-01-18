import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static final int RANGE = 8001;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int sum = 0, m = 0, answer1 = 0, answer2 = 0;
		int[] arr = new int[n];
		int[] cnt = new int[RANGE];
		Arrays.fill(cnt, 0);
		for (int i = 0; i < n; ++i)
		{
			arr[i] = sc.nextInt();
			sum += arr[i];
			++cnt[arr[i] + RANGE / 2];
		}

		Arrays.sort(arr);
		for (int i = 0; i < RANGE; ++i)
		{
			if (m == cnt[i] && answer1 == answer2)
				answer2 = i - RANGE / 2;
			else if (m < cnt[i])
			{
				m = cnt[i];
				answer1 = i - RANGE / 2;
				answer2 = i - RANGE / 2;
			}
		}
		
		System.out.printf("%.0f\n", (double) 1. * sum / n);
		System.out.println(arr[n / 2]);
		System.out.println(answer2);
		System.out.println(arr[n - 1] - arr[0]);
		sc.close();
	}
}