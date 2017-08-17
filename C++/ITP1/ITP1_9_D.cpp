#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void reverse(char *str, int n) {
	char *copy = new char[n+1];
	memmove(copy, &str[0], n);
	for (int i = n - 1, j = 0; i >= 0; i--, j++)
		str[j] = copy[i];
	delete[] copy;
}

int main() {
	string str;
	cin >> str;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string command;
		int a, b;
		cin >> command;
		cin >> a >> b;
		if (command == "print") {
			for (int i = a; i <= b; i++)
				cout << str[i];
			cout << endl;
		} else if (command == "reverse") {
			reverse(&str[a], b - a + 1);
		} else if (command == "replace") {
			string move;
			cin >> move;
			strncpy(&str[a], &move[0], strlen(&move[0]));
		}
	}
}
