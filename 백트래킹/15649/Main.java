import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static StringBuilder sb = new StringBuilder();
	public static void nandm(ArrayList<Integer> arr, int n, int m) {
		if (m == 0)
		{
			for (int i = 0; i < arr.size(); ++i)
				sb.append(Integer.toString(arr.get(i)) + " ");
			sb.append("\n");
			return;
		}
		for (int i = 0; i < n; ++i)
		{
			if (arr.contains(i + 1)) continue;
			ArrayList<Integer> temp = (ArrayList<Integer>) arr.clone();
			temp.add(i + 1);
			nandm(temp, n, m - 1);
		}		
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();
		ArrayList<Integer> arr = new ArrayList<Integer>();
		nandm(arr, n, m);
		System.out.print(sb);
		sc.close();
	}
}