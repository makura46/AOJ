#include <iostream>
using namespace std;

void bubbleSort(int A[], int N, int *p) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = N-1; i > 0; i--) {
			if (A[i] < A[i-1]) {
				swap(A[i], A[i-1]);
				(*p)++;
				flag = true;
			}
		}
	}
}

int main() {
	int N;
	cin >> N;
	int *A = new int[N];
	int count = 0;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	bubbleSort(A, N, &count);
	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N - 1)
			cout << " ";
	}
	cout << endl;
	cout << count << endl;
	delete[] A;
}
