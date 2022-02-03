import java.util.Scanner;

public class Main {
	public static int MAX = 302;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] arr = new int[MAX];
		int[] answer = new int[MAX];
		int n = sc.nextInt();
		for (int i = 2; i < n + 2; ++i)
      	arr[i] = sc.nextInt();

   	answer[2] = arr[2];
   	for (int i = 3; i < n + 2; ++i)
	      answer[i] = arr[i] + Math.max(answer[i - 3] + arr[i - 1], answer[i - 2]);
	   System.out.print(answer[n + 1]);

		sc.close();
	}
}