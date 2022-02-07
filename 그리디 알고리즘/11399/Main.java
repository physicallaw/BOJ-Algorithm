import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int answer = 0;
		Integer[] arr = new Integer[n];
		for (int i = 0; i < n; ++i)
			arr[i] = sc.nextInt();
		Arrays.sort(arr, (a, b) -> b - a);

		for (int i = 0; i < n; ++i)
	      answer += arr[i] * (i + 1);
		System.out.println(answer);
		
		sc.close();
	}
}