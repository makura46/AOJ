import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int a, b, c;
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		if(a > b){
			int tmp = a;
			a = b;
			b = tmp;
		}
		if(b > c){
			int tmp = b;
			b = c;
			c = tmp;
		}
		if(a > b){
			int tmp = a;
			a = b;
			b = tmp;
		}
		System.out.println(a + " " + b + " " + c);
	}
}
