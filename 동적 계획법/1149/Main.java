import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] answer = {0, 0, 0};
		for (int i = 0; i < n; ++i)
		{
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = sc.nextInt();
			int t1 = a + Math.min(answer[1], answer[2]);
			int t2 = b + Math.min(answer[0], answer[2]);
			int t3 = c + Math.min(answer[0], answer[1]);
			answer[0] = t1;
			answer[1] = t2;
			answer[2] = t3;
		}

		System.out.print(Math.min(Math.min(answer[0], answer[1]), answer[2]));
		sc.close();
	}
}