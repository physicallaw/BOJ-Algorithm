import java.util.Scanner;

public class Main {
	public static long MOD = 1000000007L;

	public static long factorial(long n) {
		long result = 1L;
		for (long i = 0L; i < n; ++i)
			result = result * (i + 1) % MOD;
		return result;
	}

	public static long pow(long n) {
		long result = 1L;
		long bin = MOD - 2;
		while (bin > 0) {
			if (bin % 2 == 1)
				result = result * n % MOD;
			n = n * n % MOD;
			bin /= 2;
		}
		return result;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong();
		long k = sc.nextLong();
		System.out.print(factorial(n) * pow(factorial(n - k) * factorial(k) % MOD) % MOD);

		sc.close();
	}
}