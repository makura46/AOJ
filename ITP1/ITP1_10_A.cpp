#include <cstdio>
#include <cmath>

int main() {
	double x1, y1;
	double x2, y2;
	double distance;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distance = sqrt(pow(fabs(x1-x2), 2) + pow(fabs(y1-y2), 2));
	printf("%.10f\n", distance);
}
