import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Queue<Integer> q = new LinkedList<>();
		int n = sc.nextInt();
		sc.close();

		for (int i = 1; i <= n; ++i)
			q.add(i);

		while (q.size() > 1)
		{
			q.poll();
			q.add(q.poll());
		}
		System.out.print(q.poll());		
	}
}