import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();

		int n = sc.nextInt();
		String[] arr = new String[n];
		for (int i = 0; i < n; ++i)
			arr[i] = sc.next();

		Arrays.sort(arr, (e1, e2) -> {
			if (e1.length() == e2.length())
				return e1.compareTo(e2);
			return e1.length() - e2.length();
		});
		
		sb.append(arr[0] + "\n");
		for (int i = 1; i < n; ++i)
		{
			if (arr[i - 1].equals(arr[i])) continue;
			sb.append(arr[i] + "\n");
		}

		System.out.println(sb);
		sc.close();
	}
}