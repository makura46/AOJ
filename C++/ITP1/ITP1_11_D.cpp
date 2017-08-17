#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Dice {
	public:
		int dice[6];
		Dice(int value[]) { for (int i = 0; i < 6; i++) dice[i] = value[i]; }
		void N();
		void W();
		void S();
		void E();
		bool search(Dice diceOther) {
			if (diceOther.dice[0] == dice[2]) {
				W();
			} else if (diceOther.dice[0] == dice[3]) {
				E();
			}
			if (!(diceOther.dice[0] == dice[0])) {
				for (int i = 0; i < 4; i++)
					if (diceOther.dice[0] == dice[0]) {
						break;
					} else {
						N();
					}
			}
			if (!(diceOther.dice[0] == dice[0]))
				return false;
			for (int i = 0; i < 4; i++) {
				if (!(diceOther.dice[1] == dice[1])) {
					E();
					N();
					W();
				}
			}
			for (int i = 0; i < 6; i++)
				if (!(diceOther.dice[i] == dice[i]))
					return false;
			return true;
		}
		void show() { cout << dice[2] << endl; }
		void reset(int value[]) { for (int i = 0; i < 6; i++) dice[i] = value[i]; }
};

void Dice::N() {
	int tmp = dice[0];
	dice[0] = dice[1];
	dice[1] = dice[5];
	dice[5] = dice[4];
	dice[4] = tmp;
}

void Dice::W() {
	int tmp = dice[0];
	dice[0] = dice[2];
	dice[2] = dice[5];
	dice[5] = dice[3];
	dice[3] = tmp;
}

void Dice::S() {
	int tmp = dice[0];
	dice[0] = dice[4];
	dice[4] = dice[5];
	dice[5] = dice[1];
	dice[1] = tmp;
}

void Dice::E() {
	int tmp = dice[0];
	dice[0] = dice[3];
	dice[3] = dice[5];
	dice[5] = dice[2];
	dice[2] = tmp;
}

int main() {
	bool flag = false;
	int n;
	cin >> n;
	int value[6] = {0};
	for (int i = 0; i < 6; i++)
		cin >> value[i];
	Dice dice(value);
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> value[j];
		}
		Dice adice(value);
		if (!flag)
			flag = dice.search(adice);
	}
	if (flag) 
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
