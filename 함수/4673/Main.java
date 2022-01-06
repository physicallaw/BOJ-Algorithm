public class Main {
	private static int MAX = 10001;

	private static int self_num(int n) {
		int answer = n;
		while (n > 0)
		{
			answer += n % 10;
			n /= 10;
		}

		return answer;
	}

	public static void main(String[] args) {
		int[] check = new int[MAX];
		int n;

	   for (int i = 1; i < MAX; ++i)
	   {
      	n = self_num(i);
      	if (n < MAX)
	         check[n] = 1;
	   }

	   for (int i = 1; i < MAX; ++i)
      	if (check[i] == 0)
	         System.out.println(i);
	}
}