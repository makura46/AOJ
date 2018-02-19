#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char *s[2] = {0};
	for (int i = 0; i < 2; i++) {
		char str[100] = {0};
		scanf("%s", str);
		*s[i] = str;
	}
	for (int i = 0; i < 2; i++)
		printf("%s\n", s[i]);
}
