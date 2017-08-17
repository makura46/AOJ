#include <cstdio>
#include <cmath>

int main() {
	double a, b, C;
	scanf("%lf %lf %lf", &a, &b, &C);
	C = C / 180 * M_PI;
	double S, L, h, c;
	S = a * b * sin(C) / 2;
	h = b * sin(C);
	c = sqrt(a * a + b * b - 2 * b * a * cos(C));
	L = a + b + c;
	printf("%f %f %f\n", S, L, h);
}
