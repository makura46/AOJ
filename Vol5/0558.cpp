#include <cstdio>
#include <queue>
using namespace std;

#define MAX_H 1001
#define MAX_W 1001
#define START 'S'
#define BLOCK 'X'
#define SPACE '.'
#define CHECK 'C'

int sx, sy;
int H, W, N;
char map[MAX_H][MAX_W];
char target, finish;
int addx[] = {0, 1, 0, -1};
int addy[] = {-1, 0, 1, 0};

void copyMap(char cp[MAX_H][MAX_W], char c[MAX_H][MAX_W]) {
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			cp[i][j] = c[i][j];
}

long bfs() {
	queue<int> qx;
	queue<int> qy;
	long sum = 0;
	qx.push(sx);
	qy.push(sy);
	char cpMap[MAX_H][MAX_W] = {0};
	copyMap(cpMap, map);
	cpMap[sy][sx] = CHECK;
	while (!qx.empty()) {
		int size = qx.size();
		for (int i = 0; i < size; i++) {
			int x = qx.front(), y = qy.front();
			qx.pop(); qy.pop();
			if (cpMap[y][x] == target) {
				sum--;
				while (!qx.empty()) {
					qx.pop();
					qy.pop();
				}
				if (target == finish) {
					break;
				}
				target++;
				qx.push(x);
				qy.push(y);
				copyMap(cpMap, map);
				cpMap[y][x] = CHECK;
				break;
			}
			for (int j = 0; j < 4; j++) {
				int nx = x+addx[j], ny = y+addy[j];
				if (0 <= nx && 0 <= ny && nx < W && ny < H && cpMap[ny][nx] != BLOCK && cpMap[ny][nx] != CHECK) {
					if (cpMap[ny][nx] != target)
						cpMap[ny][nx] = CHECK;
					qx.push(nx);
					qy.push(ny);
				}
			}
		}
		sum++;
	}
	return sum;
}

int main() {
	scanf("%d %d %d", &H, &W, &N);
	for (int i = 0; i < H; i++)
		scanf("%s", map[i]);
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++) {
			if (map[i][j] == START) {
				sy = i;
				sx = j;
				map[i][j] = SPACE;
			}
		}
	target = '1';
	finish = N + '1' - 1;
	long sum = bfs();
	printf("%ld\n", sum);
}
