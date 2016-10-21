//0558
import java.util.*;

public class Main {
	static int start_x;
	static int start_y;
	static int H, W, N;
	static int flag = 0;
	
	public static boolean judge(char[][] map, int x, int y){
		if(x < 0 || x >= W)
			return false;
		if(y < 0 || y >= H)
			return false;
		if(map[y][x] == 'X')
			return false;
		return map[y][x] != 'C';
	}
	
	public static int search(char[][] map){
		int count = 0;
		char[][] runmap = new char[H][W];
		ArrayList<Integer> Qx = new ArrayList<Integer>();
		ArrayList<Integer> Qy = new ArrayList<Integer>();
		for(int i = 1; i <= N; i++){
			for(int j = 0; j < H; j++)
				runmap[j] = map[j].clone();
			
			Qx.add(start_x);
			Qy.add(start_y);
			while(true){
				int num = Qx.size();
				for(int j = 0; j < num; j++){
					if(judge(runmap, Qx.get(0), Qy.get(0) + 1)){
						if(runmap[Qy.get(0) + 1][Qx.get(0)] == String.valueOf(i).charAt(0)){
							flag = 1;
							start_x = Qx.get(0);
							start_y = Qy.get(0) + 1;
							break;
						}
						runmap[Qy.get(0) + 1][Qx.get(0)] = 'C';
						Qx.add(Qx.get(0));
						Qy.add(Qy.get(0) + 1);
					}
					if(judge(runmap, Qx.get(0), Qy.get(0) - 1)){
						if(runmap[Qy.get(0) - 1][Qx.get(0)] == String.valueOf(i).charAt(0)){
							flag = 1;
							start_x = Qx.get(0);
							start_y = Qy.get(0) - 1;
							break;
						}
						runmap[Qy.get(0) - 1][Qx.get(0)] = 'C';
						Qx.add(Qx.get(0));
						Qy.add(Qy.get(0) - 1);
					}
					if(judge(runmap, Qx.get(0) + 1, Qy.get(0))){
						if(runmap[Qy.get(0)][Qx.get(0) + 1] == String.valueOf(i).charAt(0)){
							flag = 1;
							start_x = Qx.get(0) + 1;
							start_y = Qy.get(0);
							break;
						}
						runmap[Qy.get(0)][Qx.get(0) + 1] = 'C';
						Qx.add(Qx.get(0) + 1);
						Qy.add(Qy.get(0));
					}
					if(judge(runmap, Qx.get(0) - 1, Qy.get(0))){
						if(runmap[Qy.get(0)][Qx.get(0) - 1] == String.valueOf(i).charAt(0)){
							flag = 1;
							start_x = Qx.get(0) - 1;
							start_y = Qy.get(0);
							break;
						}
						runmap[Qy.get(0)][Qx.get(0) - 1] = 'C';
						Qx.add(Qx.get(0) - 1);
						Qy.add(Qy.get(0));
					}
					Qx.remove(0);
					Qy.remove(0);
				}
				count++;
				if(flag == 1){
					Qx.clear();
					Qy.clear();
					flag = 0;
					break;
				}
			}
		}
		return count;
	}
	
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		H = scan.nextInt();
		W = scan.nextInt();
		N = scan.nextInt();
		int sum = 0;
		char[][] map = new char[H][W];
		for(int i = 0; i < H; i++){
			String S = scan.next();
			map[i] = S.toCharArray();
		}
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				if(map[i][j] == 'S'){
					map[i][j] = '.';
					start_x = j;
					start_y = i;
				}
			}
		}
		sum += search(map);
		System.out.println(sum);
	}
}
