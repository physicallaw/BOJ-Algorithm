import java.util.Scanner;

public class Main {
	public static StringBuilder sb = new StringBuilder();

	public static void hanoi(int n, int a, int b) {
		if (n == 1)
		{
			sb.append((a + 1) + " " + (b + 1) + "\n");
			return;
		}
		hanoi(n - 1, a, 3 - a - b);
		hanoi(1, a, b);
		hanoi(n - 1, 3 - a - b, b);
}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		System.out.println((int) Math.pow(2, n) - 1);
		hanoi(n, 0, 2);
		System.out.print(sb);

		sc.close();
	}
}