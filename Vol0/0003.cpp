#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int len[3] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++)
			cin >> len[j];
		int max_index = 0;
		for (int j = 1; j < 3; j++)
			if (len[max_index] < len[j])
				max_index = j;
		swap(len[0], len[max_index]);
		if (len[0] * len[0] == len[1] * len[1] + len[2] * len[2])
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
