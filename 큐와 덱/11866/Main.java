import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Queue<Integer> q = new LinkedList<>();
		int n = sc.nextInt();
		int k = sc.nextInt();
		sc.close();

		for (int i = 1; i <= n; ++i)
			q.add(i);

		System.out.print("<");
		while (q.size() > 1)
		{
			for (int i = 1; i < k; ++i)
				q.add(q.poll());
			System.out.print(q.poll() + ", ");		
		}
		System.out.print(q.poll() + ">");		
	}
}