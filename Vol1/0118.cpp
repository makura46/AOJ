#include <cstdio>
using namespace std;

#define MAX_H 100
#define MAX_W 100
#define CHECK 'C'

int H, W;

int addx[] = {0, 1, 0, -1};
int addy[] = {-1, 0, 1, 0};
char map[MAX_H+1][MAX_W+1];

void dfs(int x, int y, char s) {
	map[y][x] = CHECK;
	int nx, ny;
	for (int i = 0; i < 4; i++) {
		nx = x+addx[i];
		ny = y+addy[i];
		if (0 <= nx && 0 <= ny && nx < W && ny < H && map[ny][nx] == s)
			dfs(nx, ny, s);
	}
}

int main() {
	while (1) {
		scanf("%d %d", &H, &W);
		if (H == 0 && W == 0)
			break;
		for (int i = 0; i < H; i++)
			scanf("%s", map[i]);
		int sum = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (map[i][j] != CHECK) {
					dfs(j, i, map[i][j]);
					sum++;
				}
			}
		}
		printf("%d\n", sum);
	}
}
