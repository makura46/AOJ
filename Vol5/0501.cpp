#include <cstdio>

typedef struct {
	char before;
	char after;
} List;

int main() {
	while (true) {
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;

		List *l = new List[n];
		for (int i = 0; i < n; i++) {
			scanf(" %c %c", &l[i].before, &l[i].after);
		}
		int m;
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			char ch;
			scanf(" %c", &ch);
			for (int j = 0; j < n; j++) {
				if (ch == l[j].before) {
					ch = l[j].after;
					break;
				}
			}
			printf("%c", ch);
		}
		printf("\n");
		delete[] l;
	}
}
