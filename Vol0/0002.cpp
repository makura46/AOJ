#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a, b;
		if (cin >> a >> b) {
			int sum = a + b;
			int count = 0;
			do {
				count++;
			} while (sum /= 10);
			cout << count << endl;
			cin.clear();
		} else {
			break;
		}
	}
}
