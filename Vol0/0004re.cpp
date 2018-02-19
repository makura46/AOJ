#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x, y;
		if (a != d) {
			int tmp = a;
			a *= d;
			b *= d;
			c *= d;
			d *= tmp;
			e *= tmp;
			f *= tmp;
		}
		double _y = b - e;
		double value = c - f;
		y = value / _y;
		x = (c - b * y) / a;
		if (x == 0)
			x = fabs(x);
		else {
			x *= 1000;
			x = roundf(x);
			x /= 1000;
		}
		if (y == 0)
			y = fabs(y);
		else {
			y *= 1000;
			y = roundf(y);
			y /= 1000;
		}
		
		printf("%.3f %.3f\n", x, y);
	}
}
