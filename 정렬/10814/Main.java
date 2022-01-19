import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();

		int n = sc.nextInt();
		String[][] arr = new String[n][2];
		for (int i = 0; i < n; ++i)
		{
			arr[i][0] = sc.next();
			arr[i][1] = sc.next();
		}

		Arrays.sort(arr, (e1, e2) -> {
			return Integer.parseInt(e1[0]) - Integer.parseInt(e2[0]);
		});
		
		for (int i = 0; i < n; ++i)
			sb.append(arr[i][0] + " " + arr[i][1] + "\n");

		System.out.println(sb);
		sc.close();
	}
}