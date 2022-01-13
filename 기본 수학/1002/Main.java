import java.util.Scanner;

public class Main {
	public static int dist(int x1, int y1, int x2, int y2) {
		return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int answer;
		
		for (int i = 0; i < n; ++i)
		{
			int x1 = sc.nextInt();
			int y1 = sc.nextInt();
			int r1 = sc.nextInt();
			int x2 = sc.nextInt();
			int y2 = sc.nextInt();
			int r2 = sc.nextInt();
			int d = dist(x1, y1, x2, y2);

			if (x1 == x2 && y1 == y2 && r1 == r2)
				answer = -1;
			else if (d == (r1 + r2) * (r1 + r2) || d == (r1 - r2) * (r1 - r2))
			   answer = 1;
			else if ((r1 - r2) * (r1 - r2) < d && d < (r1 + r2) * (r1 + r2))
				answer = 2;
			else
         	answer = 0;

			System.out.println(answer);
		}
		
		sc.close();
	}
}