#include <iostream>
using namespace std;

long gcd(long a, long b) {
	if (!b)
		return a;
	else {
		return gcd(b, a % b);
	}
}

int main() {
	long a, b;
	while (cin >> a >> b) {
		if (a < b)
			swap(a, b);
		long max = gcd(a, b);
		long min;
		if (max == 0)
			min = a * b;
		else
			min = a * b / max;
		cout << max << " " << min << endl;
	}
}
