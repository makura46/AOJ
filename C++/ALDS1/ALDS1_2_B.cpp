#include <iostream>
using namespace std;

void selectionSort(int A[], int N, int *p) {
	for (int i = 0; i < N; i++) {
		int min_index = i;
		for (int j = i; j < N; j++) 
			if (A[min_index] > A[j])
				min_index = j;
		if (min_index != i)
			(*p)++;
		swap(A[min_index], A[i]);
	}
}

int main() {
	int N;
	cin >> N;
	int *A = new int[N];
	int count = 0;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	selectionSort(A, N, &count);
	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N-1)
			cout << " ";
	}
	cout << endl;
	cout << count << endl;
	delete[] A;
}
