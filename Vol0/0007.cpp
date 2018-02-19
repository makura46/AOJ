#include <iostream>
using namespace std;

#define RATE 0.05

int main() {
	int n;
	long debt = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		debt += (long)debt * RATE;
		if (debt % 1000) {
			debt /= 1000;
			debt += 1;
			debt *= 1000;
		}
	}
	cout << debt << endl;
}
