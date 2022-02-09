import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int answer = 0;
		for (int i = 5; i <= n; i += 5)
		{
			int t = i;
			while (t > 0 && t % 5 == 0)
			{
				++answer;
				t /= 5;
			}
		}
		System.out.print(answer);

		sc.close();
	}
}