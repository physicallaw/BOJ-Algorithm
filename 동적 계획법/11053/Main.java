import java.util.Scanner;

public class Main {
	public static int MAX = 1001;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] arr = new int[MAX];
		int[] answer = new int[MAX];
		int n = sc.nextInt();
		for (int i = 0; i < n; ++i)
      	arr[i] = sc.nextInt();

		answer[0] = arr[0];
		int it, l = 1;
   	for (int i = 1; i < n; ++i)
		{
			for (it = 0; answer[it] != 0 && arr[i] > answer[it]; ++it);
			if (it == l)
				answer[l++] = arr[i];
			else
				answer[it] = arr[i];
		}
	   System.out.print(l);

		sc.close();
	}
}