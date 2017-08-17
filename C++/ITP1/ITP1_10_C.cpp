#include <cstdio>
#include <cmath>

int main() {
	while (true) {
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		double *s = new double[n];
		double sum = 0;
		double m;
		for (int i = 0; i < n; i++) {
			scanf("%lf", &s[i]);
			sum += s[i];
		}
		m = sum / n;
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum += pow((s[i] - m), 2);
		}
		double a = sqrt(sum / n);
		printf("%f\n", a);
		delete[] s;
	}
}
