#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

int main() {
	while (1) {
		queue<char> que;
		string str;
		cin >> str;
		if (str == "-")
			break;
		int size = strlen(&str[0]);
		for (int i = 0; i < size; i++) {
			que.push(str[i]);
		}
		int count;
		cin >> count;
		for (int i = 0; i < count; i++) {
			int h;
			cin >> h;
			for (int j = 0; j < h; j++) {
				que.push(que.front());
				que.pop();
			}
		}
		for (; !que.empty();) {
			cout << que.front();
			que.pop();
		}
		cout << endl;
	}
}
