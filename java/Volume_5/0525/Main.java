import java.util.Scanner;

public class Main{
	static int R, C;
	static int flag;
	static int max;
	static int num;
	
	//裏返すメソッド
	public static void reverse(int[][] field, int line){
		for(int i = 0; i < C; i++){
			if(field[line][i] == 0)
				field[line][i] = 1;
			else if(field[line][i] == 1)
				field[line][i] = 0;
		}
	}

	public static int result(int[][] field){
		int sum = 0;
		int front, back;
		for(int i = 0; i < C; i++){
			front = 0;
			back = 0;
			for(int j = 0; j < R; j++){
				if(field[j][i] == 0)
					back++;
				else
					front++;
			}
			sum += Math.max(back, front);
		}
		return sum;
	}

	public static void run(int play, int count, int[][] field){
		int[][] runmap = field.clone(); 
		while(true){
			for(int i = 0; i < 2; i++){
				if(i == 1)
					reverse(runmap, count);
				if(count == R-1){
					flag++;
					int sum = result(runmap);
					max = Math.max(sum, max);
					if(flag == num)
						break;
					return;
				}
				run(i, ++count, runmap);
			}
		}
	}

	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		while(true){
			flag = 0;
			max = -1;
			num = 1;
			R = scan.nextInt();
			C = scan.nextInt();
			if(R == 0 && C == 0)
				break;
			for(int i = 0; i < R; i++)
				num *= 2;
			int[][] map = new int[R][C];
			for(int i = 0; i < R; i++)
				for(int j = 0; j < C; j++)
					map[i][j] = scan.nextInt();	//1が表を表す0が裏を表す
			run(0, 0, map);	//0を多くする
			System.out.println(max);
		}
	}
}
