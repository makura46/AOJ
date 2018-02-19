#include <iostream>
using namespace std;

int main() {
	int M;
	int max[3] = {0};
	for (int i = 0; i < 10; i++) {
			cin >> M;
			if (max[0] < M) {
				max[2] = max[1];
				max[1] = max[0];
				max[0] = M;
			} else if (max[1] < M) {
				max[2] = max[1];
				max[1] = M;
			} else if (max[2] < M)
				max[2] = M;
	}
	for (int i = 0; i < 3; i++)
		cout << max[i] << endl;
}
