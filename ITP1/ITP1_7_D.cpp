#include <iostream>
using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	int **a = new int*[n];
	int **b = new int*[m];
	long **c = new long*[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	for (int i = 0; i < m; i++)
		b[i] = new int[l];
	for (int i = 0; i < n; i++)
		c[i] = new long[l];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < l; j++)
			c[i][j] = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++)
			cin >> b[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			long sum = 0;
			for (int k = 0; k < m; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << c[i][j];
			if (j + 1 != l) {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] a[i];
	for (int i = 0; i < m; i++)
		delete[] b[i];
	for (int i = 0; i < n; i++)
		delete[] c[i];

	delete[] a;
	delete[] b;
	delete[] c;
}
