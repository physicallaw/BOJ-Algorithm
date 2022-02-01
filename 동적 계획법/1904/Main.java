import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int a, b, t;
		a = 1;
		b = 1;

		for (int i = 1; i < n; ++i)
   	{
   	   t = a;
      	a = b;
      	b = (b + t) % 15746;
   	}

		System.out.print(b);

		sc.close();
	}
}