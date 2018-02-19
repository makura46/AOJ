#include <iostream>
#include <cstdio>
using namespace std;

typedef struct {
	int num;
	char color;
} Cards;

bool color(const Cards &left, const Cards &right) {
	return left.color > right.color;
}

bool big(const Cards &left, const Cards &right) {
	return left.num > right.num;
}

bool colorCheck(int countR, int countB, int countG) {
	if (countR % 3 && countB % 3 && countG % 3)
		return true;
	else
		return false;
}

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		Cards c[9];
		int countB = 0, countR = 0, countG = 0;
		for (int i = 0; i < 9; i++)
			cin >> c[i].num;
		for (int i = 0; i < 9; i++) {
			scanf(" %c", &c[i].color);
			if (c[i].color == 'B')
				countB++;
			else if (c[i].color == 'R')
				countR++;
			else
				countG++;
		}
		if (!colorCheck(countR, countB, countG)) {
			cout << 0 << endl;
			continue;
		}
		sort(&c[0], &c[9], color);
		int count = 0;
		sort(&c[count], &c[countR], big);
		count += countR;
		sort(&c[count], &c[count + countG], big);
		count += countG;
		sort(&c[count], &c[count + countB], big);
		for (int i = 0; i < 9; i++)
				cout << c[i].color << " ";
		cout << endl;
		for (int i = 0; i < 9; i++)
				cout << c[i].num << " ";
		cout << endl;
	}
}
