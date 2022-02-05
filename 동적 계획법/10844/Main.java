import java.util.Scanner;

public class Main {
	public static int MAX = 1000001;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] arr = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
		for (int i = 1; i < n; ++i)
		{
			int[] temp = {arr[1] % 1000000000,
	         (arr[0] + arr[2]) % 1000000000,
         	(arr[1] + arr[3]) % 1000000000,
         	(arr[2] + arr[4]) % 1000000000,
         	(arr[3] + arr[5]) % 1000000000,
         	(arr[4] + arr[6]) % 1000000000,
         	(arr[5] + arr[7]) % 1000000000,
         	(arr[6] + arr[8]) % 1000000000,
         	(arr[7] + arr[9]) % 1000000000,
         	arr[8] % 1000000000
         	};
			arr = temp;
		}

		int answer = 0;
		for (int i = 0; i < 10; ++i)
			answer = (answer + arr[i]) % 1000000000;
		System.out.print(answer);		

		sc.close();
	}
}