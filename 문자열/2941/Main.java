import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};

		String s = sc.nextLine();

		for (int i = 0; i < croatian.length; ++i)
			s = s.replace(croatian[i], "0");

      System.out.print(s.length());

		sc.close();
	}
}