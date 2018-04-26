#include <cstdio>
#include <string>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

queue<string> q;
queue<int> in;
map<string, int> m;
int add[4] = {-1, 1, 4, -4};

void bfs(string t, int r) {
	int cnt = 0;
	q.push(t);
	in.push(r);
	while (!in.empty()) {
		int size = in.size();
		cnt++;
		for (int j = 0; j < size; j++) {
			int index = in.front();
			string str = q.front();
			in.pop();
			q.pop();
			for (int i = 0; i < 4; i++) {
				string e = str;
				if (i == 0 && index == 4) continue;
				if (i == 1 && index == 3) continue;
				int x = add[i]+index;
				if (x < 0 || 7 < x)
					continue;
				char tmp = e[x];
				e[x] = e[index];
				e[index] = tmp;
				if (!m.count(e)) {
					m.insert(make_pair(e, cnt));
					q.push(e);
					in.push(x);
				}
			}
		}
	}
}

int main() {
	int tmp[8];
	m.insert(make_pair("01234567", 0));
	bfs("01234567", 0);
	while (cin >> tmp[0] >> tmp[1] >> tmp[2] >> tmp[3] >> tmp[4] >> tmp[5] >> tmp[6] >> tmp[7]) {
		string str = "";
		for (int i = 0; i < 8; i++) {
			str += tmp[i] + '0';
		}
		cout << m[str] << endl;
	}
}
