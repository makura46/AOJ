#include <iostream>
using namespace std;

int gcdAsk(int x, int y) {
	if (y == 0)
		return x;
	else {
		int mod = x % y;
		return gcdAsk(y, mod);
	}
}

int main() {
	int x, y;
	cin >> x >> y;
	int gcd;
	if (x >= y)
		gcd = gcdAsk(x, y);
	else
		gcd = gcdAsk(y, x);
	cout << gcd << endl;
}
