import java.util.Scanner;

public class Main {
	public static int MAX = 10;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int price = sc.nextInt();
		int[] coin = new int[MAX];
		for (int i = 0; i < n; ++i)
      	coin[i] = sc.nextInt();

		int answer = 0;
		for (int i = n - 1; i > -1; --i)
		{
			answer += price / coin[i];
			price %= coin[i];
		}

		System.out.println(answer);
		
		sc.close();
	}
}