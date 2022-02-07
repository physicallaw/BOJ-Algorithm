import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		long a, b = 1000000000, answer = 0;
		long[] arr = new long[n - 1];
		for (int i = 0; i < n - 1; ++i)
			arr[i] = sc.nextLong();
		for (int i = 0; i < n - 1; ++i)
		{
			a = sc.nextLong();
			b = a < b ? a : b;
			answer += b * arr[i];
		}
		System.out.println(answer);
		
		sc.close();
	}
}