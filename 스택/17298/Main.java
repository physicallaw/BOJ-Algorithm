import java.util.Scanner;
import java.util.Stack;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
      StringBuilder sb = new StringBuilder();

		Stack<Integer> s = new Stack<>();
		int n = sc.nextInt();
		int[] arr = new int[n];
		int[] answer = new int[n];
		for (int i = 0; i < n; ++i)
			arr[i] = sc.nextInt();		

		for (int i = n - 1; i >= 0; --i)
		{
			while (!s.empty() && s.lastElement() <= arr[i])
				s.pop();
			answer[i] = s.empty() ? -1 : s.lastElement();
			s.push(arr[i]);
		}
		for (int i = 0; i < n; ++i)
			sb.append(answer[i] + " ");
		System.out.print(sb);

		sc.close();
	}
}