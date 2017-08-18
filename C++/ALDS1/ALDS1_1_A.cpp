#include <iostream>
using namespace std;

void insertionSort(int A[], int N) {
	for (int i = 1; i < N; i++) {
		int tmp = A[i];
		int j = i-1;
		while (j >= 0 && A[j] > tmp) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = tmp;
		for (int j = 0; j < N; j++) {
			cout << A[j];
			if (j != N-1)
				cout << " ";
		}
		cout << endl;
	}
}

int main() {
	int N;
	cin >> N;
	int *A = new int[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int j = 0; j < N; j++) {
		cout << A[j];
		if (j != N-1)
			cout << " ";
	}
	cout << endl;
	insertionSort(A, N);
	delete[] A;
}
