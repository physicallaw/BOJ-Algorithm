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

		for (int i = 1; i < n; ++i)
		{
			int t = gcd(arr[0], arr[i]);
			System.out.println(arr[0] / t + "/" + arr[i] / t);
		}

		sc.close();
	}
}