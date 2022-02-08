import java.util.Scanner;

public class Main {
	public static int gcd(int a, int b) {
		return b != 0 ? gcd(b, a % b) : a;
	}

	public static int lcm(int a, int b) {
		return a * b / gcd(a, b);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.print(gcd(a, b) + "\n" + lcm(a, b));

		sc.close();
	}
}