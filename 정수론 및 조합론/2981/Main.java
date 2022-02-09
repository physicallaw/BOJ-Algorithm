import java.util.Scanner;

public class Main {
	public static int gcd(int a, int b) {
		return b != 0 ? gcd(b, a % b) : a;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; ++i)
			arr[i] = sc.nextInt();

		int m = 0;
		for (int i = 0; i < n; ++i)
			for (int j = i + 1; j < n; ++j)
				m = gcd(Math.abs(arr[i] - arr[j]), m);

		for (int i = 2; i * i < m; ++i)
			if (m % i == 0)
				System.out.print(i + " ");
		for (int i = (int) Math.sqrt(m); i > 0; --i)
			if (m % i == 0)
			System.out.print(m / i + " ");
		
		sc.close();
	}
}