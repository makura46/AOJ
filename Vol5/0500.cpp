#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while (true) {
		scanf("%d", &n);
		if (n == 0)
			break;
		int *A = new int[n];
		int *B = new int[n];
		int sumA = 0;
		int sumB = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &A[i], &B[i]);
		}
		for (int i = 0; i < n; i++) {
			if (A[i] > B[i])
				sumA += A[i] + B[i];
			else if (A[i] < B[i])
				sumB += A[i] + B[i];
			else {
				sumA += A[i];
				sumB += B[i];
			}
		}
		printf("%d %d\n", sumA, sumB);
		delete[] A;
		delete[] B;
	}
}
