import java.util.Scanner;

public class Main {
	public static int MAX = 10003;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] arr = new int[MAX];
		int[] answer = new int[MAX];
		int n = sc.nextInt();
		for (int i = 3; i < n + 3; ++i)
      	arr[i] = sc.nextInt();

   	for (int i = 3; i < n + 3; ++i)
	      answer[i] = Math.max(answer[i - 1] ,arr[i] + Math.max(answer[i - 3] + arr[i - 1], answer[i - 2]));
	   System.out.print(answer[n + 2]);

		sc.close();
	}
}