#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = strlen(&str[0]);
	for (int i = len - 1; i >= 0; i--)
		cout << str[i];
	cout << endl;
}
