import java.util.Scanner;

public class Main {
	public static StringBuilder sb = new StringBuilder();

	public static void star(int i, int j, int n) {
		if((i / n) % 3 == 1 && (j / n) % 3 == 1)
		   sb.append(" ");
		else if(n / 3 == 0)
			sb.append("*");
		else
			star(i, j, n/3);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				star(i, j, n);
			sb.append("\n");
		}
		System.out.print(sb);

		sc.close();
	}
}