import java.util.Scanner;
import java.util.Stack;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Stack<Boolean> s = new Stack<>();
		int n = sc.nextInt();

		for (int i = 0; i < n; ++i)
		{
			String t = sc.next();
			for (int j = 0; j < t.length(); ++j)
			{
				if (s.empty() || t.charAt(j) == '(')
					s.push(t.charAt(j) == '(' ? true : false);
				else if (s.lastElement())
					s.pop();
				else
					s.push(false);
			}
			if (s.empty())
				System.out.println("YES");
			else
				System.out.println("NO");
			s.clear();
		}
		sc.close();
	}
}