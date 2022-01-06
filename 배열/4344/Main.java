import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int c = sc.nextInt();
		for (int i = 0; i < c; ++i)
		{
			int n = sc.nextInt();
			int[] score = new int[n];
			float avg = 0.f, ans = 0.f;
			for (int j = 0; j < n; ++j)
			{
				score[j] = sc.nextInt();
			   avg += score[j];
			}
			avg /= n;

			for (int j = 0; j < n; ++j)
         if (score[j] > avg)
            ans += 1.f;
		   ans = ans / n * 100;
			System.out.printf("%.3f%%\n", ans);
      }

		sc.close();
	}
}