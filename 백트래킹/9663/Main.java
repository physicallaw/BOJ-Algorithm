import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static List<Integer> arr;
	public static int find(int n, int val) {
		for (int i = 0; i < n; ++i)
		{
			if (arr.get(i) == val)
				return i;
			if (arr.get(i) - i == val - n)
				return i;
			if (arr.get(i) + i == val + n)
				return i;
		}
		return -1;
	}
	
	public static int nqueen(int n) {
		if (arr.size() == n)
			return 1;
		int answer = 0;
		for (int i = 0; i < arr.size(); ++i)
		{
			if (find(n, i) != -1) continue;
			arr.set(n, i);
			answer += nqueen(n + 1);
		}
		return answer;	
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		arr = Arrays.asList(new Integer[n]);
		System.out.print(nqueen(0));
		sc.close();
	}
}