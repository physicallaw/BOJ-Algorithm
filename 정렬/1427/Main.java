import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		char[] s = sc.next().toCharArray();
		Arrays.sort(s);

		for (int i = s.length; i > 0; --i)
			System.out.print(s[i - 1]);
		sc.close();
	}
}