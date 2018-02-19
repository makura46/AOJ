#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	long *R = new long[n];
	int min_index = 0;
	long max = LONG_MIN;
	for (int i = 0; i < n; i++) {
		cin >> R[i];
		if (i != 0) {
			if (max < R[i] - R[min_index])
				max = R[i] - R[min_index];
			if (R[i] < R[min_index])
				min_index = i;
		}
	}
	cout << max << endl;
	delete[] R;
}
