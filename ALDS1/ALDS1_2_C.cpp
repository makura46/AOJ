#include <iostream>
#include <queue>
#include <cstdlib>
#include <string>
using namespace std;

typedef struct {
	char pic;
	int value;
} Cards;

void BubbleSort(Cards C[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = N-1; j > 0; j--) {
			if (C[j].value < C[j-1].value)
				swap(C[j], C[j-1]);
		}
	}
}

void SelectionSort(Cards C[], int N) {
	for (int i = 0; i < N; i++) {
		int min_index = i;
		for (int j = i+1; j < N; j++) {
			if (C[min_index].value > C[j].value)
				min_index = j;
		}
		swap(C[min_index], C[i]);
	}
}

int main() {
	int N;
	cin >> N;
	string *input = new string[N];
	Cards *C = new Cards[N];
	queue<char> q[9];
	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < N; i++) {
		C[i].pic = input[i][0];
		C[i].value = atoi(&input[i][1]);
		q[C[i].value-1].push(C[i].pic);
	}
	BubbleSort(C, N);
	bool flag = true;
	for (int i = 0; i < N; i++) {
		if (flag && C[i].pic == q[C[i].value-1].front())
			q[C[i].value-1].pop();
		else if (flag)
			flag = false;
		cout << C[i].pic << C[i].value;
		if (i != N-1)
			cout << " ";
	}
	cout << endl;
	if (flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	for (int i = 0; i < N; i++) {
		C[i].pic = input[i][0];
		C[i].value = atoi(&input[i][1]);
		q[C[i].value-1].push(C[i].pic);
	}
	flag = true;
	SelectionSort(C, N);
	for (int i = 0; i < N; i++) {
		if (flag && C[i].pic == q[C[i].value-1].front())
			q[C[i].value-1].pop();
		else if (flag)
			flag = false;
		cout << C[i].pic << C[i].value;
		if (i != N-1)
			cout << " ";
	}
	cout << endl;
	if (flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	delete[] input;
	delete[] C;
}
