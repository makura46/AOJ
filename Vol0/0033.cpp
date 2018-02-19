#include <cstdio>
#include <algorithm>
using namespace std;

int ball[10] = {0};

int dfs(int left, int right, int index) {
	int re = 0;
	if (index == 10)
		return 1;
	else {
		if (left < ball[index]) re = dfs(ball[index], right, index + 1);
		if (right < ball[index]) re = dfs(left, ball[index], index + 1);
	}
	return re;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int c = 0; c < N; c++) {
		for (int i = 0; i < 10; i++)
			scanf("%d", &ball[i]);
		int sum = dfs(0, 0, 0);
		if (sum)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
