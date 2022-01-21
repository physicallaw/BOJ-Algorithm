import java.util.HashMap;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();
		int n = sc.nextInt();
		int l = 0, temp = -2000000000;
		int[] arr = new int[n];
		PriorityQueue<Integer> q = new PriorityQueue<Integer>();
		HashMap<Integer, Integer> m = new HashMap<>();

		for (int i = 0; i < n; ++i)
		{
			arr[i] = sc.nextInt();
			q.add(arr[i]);
		}

		while (!q.isEmpty())
		{
			int top = q.poll();
			if (temp != top)
			{
				m.put(top, l);
				++l;
				temp = top;
			}
		}
		for (int i = 0; i < n; ++i)
			sb.append(m.get(arr[i]) + " ");
		
		System.out.println(sb);
		sc.close();
	}
}