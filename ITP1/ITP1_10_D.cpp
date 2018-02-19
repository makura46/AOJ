#include <cstdio>
#include <cmath>

int main() {
	int n;
	scanf("%d", &n);
	double *x = new double[n];
	double *y = new double[n];
	double *D = new double[4];
	for (int i = 0; i < n; i++)
		scanf("%lf", &x[i]);
	for (int i = 0; i < n; i++)
		scanf("%lf", &y[i]);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += fabs(x[i] - y[i]);
	}
	D[0] = pow(sum, 1);
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(fabs(x[i] - y[i]), 2);
	}
	D[1] = sqrt(sum);
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pow(fabs(x[i] - y[i]), 3);
	}
	D[2] = cbrt(sum);
	D[3] = 0;
	for (int i = 0; i < n; i++) {
		if (D[3] < fabs(x[i] - y[i]))
			D[3] = fabs(x[i] - y[i]);
	}
	printf("%f %f %f %f\n", D[0], D[1], D[2], D[3]);
	delete[] x;
	delete[] y;
	delete[] D;
}
