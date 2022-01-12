import java.util.Scanner;

public class Main {
	public static final int MAX = 1001;
	public static void main(String[] args) {
		int answer = 0;
		boolean[] prime = new boolean[MAX];
		prime[0] = true;
		prime[1] = true;
		for (int i = 2; i < MAX; ++i)
			for (int j = i * 2; j < MAX; j += i)
				prime[j] = true;

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; ++i)
		{
			int t = sc.nextInt();
			if (!prime[t])
				++answer;
		}
		System.out.print(answer);
		sc.close();
	}
}