#include <iostream>
#include <cstring>
using namespace std;

#define LEN 201
#define SLEN 101

int search(const char str[], const char sStr[], int i) {
	char tmp[SLEN] = {0};
	for (int j = i, k = 0; j < i + strlen(sStr); j++, k++) {
		if (i + strlen(sStr) != j)
			tmp[k] = str[j];
		else
			tmp[k] = '\0';
		
	}
	return strcmp(tmp, sStr);
}

int main() {
	char str[LEN] = {0};
	char scStr[SLEN] = {0};
	bool flag = true;
	cin >> str >> scStr;
	int len = strlen(str);
	for (int i = len; i <= 2 * len; i++) {
		if (i == 2 * len) 
			str[i] = '\0';
		else 
			str[i] = str[i - len];
		
	}

	len = strlen(scStr);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == scStr[0]) {
			flag = (bool)search(str, scStr, i);
		}
		if (!flag)
			break;
	}

	if (!flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}


