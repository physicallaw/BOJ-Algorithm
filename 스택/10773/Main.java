import java.util.Scanner;
import java.util.Stack;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Stack<Integer> s = new Stack<>();
		int n = sc.nextInt();
		int t, answer = 0;

		for (int i = 0; i < n; ++i)
		{
			t = sc.nextInt();
			answer += t;
			if (t != 0)
				s.push(t);
			else
				answer -= s.pop();
		}
		
		System.out.print(answer);
		sc.close();
	}
}