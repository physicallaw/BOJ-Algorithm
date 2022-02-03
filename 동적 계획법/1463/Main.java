import java.util.Scanner;

public class Main {
	public static int MAX = 1000001;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] arr = new int[n + 1];
		arr[1] = 0;

		for (int i = 1; i < n + 1; ++i)
	   {
      	if (i * 3 < n + 1 && (arr[i * 3] == 0 || arr[i * 3] > arr[i] + 1))
         	arr[i * 3] = arr[i] + 1;
      	if (i * 2 < n + 1 && (arr[i * 2] == 0 || arr[i * 2] > arr[i] + 1))
	         arr[i * 2] = arr[i] + 1;
      	if (i < n && (arr[i + 1] == 0 || arr[i + 1] > arr[i] + 1))
	         arr[i + 1] = arr[i] + 1;
	   }

   	System.out.print(arr[n]);		

		sc.close();
	}
}