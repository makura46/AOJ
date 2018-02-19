#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Dice {
	private:
		int dice[6];
		int up, front;
	public:
		Dice(int value[]) { for (int i = 0; i < 6; i++) dice[i] = value[i]; }
		void N();
		void W();
		void S();
		void E();
		bool searchUp() { return dice[0] == up ? true : false; }
		void setUp(int set) { up = set; }
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
	int value[6] = {0};
	int n;
	for (int i = 0; i < 6; i++)
		cin >> value[i];
	cin >> n;
	Dice dice(value);
	for (int i = 0; i < n; i++) {
		int top, front;
		cin >> top >> front;
		dice.setUp(top);
		bool flag = false;
		int count;
		for (count = 0; count < 6; count++)
			if (value[count] == front)
				break;
		switch (count) {
			case 0:
				dice.S();
				break;
			case 2:
				dice.W();
				dice.S();
				break;
			case 3:
				dice.E();
				dice.S();
				break;
			case 4:
				dice.S();
				dice.S();
				break;
			case 5:
				dice.N();
				break;
		}
		while (true) {
			if (dice.searchUp())
				break;
			else
				dice.W();
		}
		dice.show();
		dice.reset(value);
	}
}
