import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();

		int n = sc.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; ++i)
			arr[i] = sc.nextInt();

		Arrays.sort(arr);
		for (int i = 0; i < n; ++i)
			sb.append(arr[i] + "\n");

		System.out.println(sb);
		sc.close();
	}
}