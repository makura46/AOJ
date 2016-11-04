import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int area, len;
		area = a * b;
		len = 2 * a + 2 * b;
		System.out.println(area + " " + len);
	}
}
