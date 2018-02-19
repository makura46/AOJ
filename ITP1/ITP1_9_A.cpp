#include <cstdio>
#include <cstring>
#include <cctype>

int main() {
	char W[11] = {0};
	char T[1001] = {0};
	char exit[] = "END_OF_TEXT";
	scanf("%s", W);
	for (int i = 0; i < strlen(W); i++)
		W[i] = toupper(W[i]);
	int count = 0;
	while (1) {
		scanf("%s", T);
		if (!strcmp(exit, T))
			break;
		for (int i = 0; i < strlen(T); i++)
			T[i] = toupper(T[i]);
		if (!strcmp(W, T))
			count++;
	}
	printf("%d\n", count);
}
