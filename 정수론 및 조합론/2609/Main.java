import java.util.Scanner;

public class Main {
	public static int gcd(int a, int b) {
		if (a < b)
			return gcd(b, a);
		if (a == b)
			return a;
		return gcd(a - b, b);
	}

	public static int lcm(int a, int b) {
		int n = a;
		while (n % b != 0)
			n += a;
		return n;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.print(gcd(a, b) + "\n" + lcm(a, b));

		sc.close();
	}
}