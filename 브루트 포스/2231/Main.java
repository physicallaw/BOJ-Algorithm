import java.util.Scanner;
import java.lang.Math;

public class Main {
	public static int decompose(int n) {
		int d = (int) Math.floor(Math.log10(n) + 1);
		for (int i = n - d * 10; i < n; ++i)
		{
			int temp = i;
			for (int j = i; j > 0; j /= 10)
			   temp += j % 10;
			if (n == temp)
      		return i;
	   }
   	return 0;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		System.out.print(decompose(n));
		sc.close();
	}
}