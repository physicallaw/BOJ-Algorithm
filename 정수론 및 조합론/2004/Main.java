import java.util.Scanner;

public class Main {
	public static int cal(int n, int f) {
		int result = 0;
		while (n >= f)
		{
			n /= f;
			result += n;
		}
		return result;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		System.out.print(Math.min(cal(n, 2) - cal(m, 2) - cal(n - m, 2), 
		cal(n, 5) - cal(m, 5) - cal(n - m, 5)));

		sc.close();
	}
}