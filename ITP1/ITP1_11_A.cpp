#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Dice {
	private:
		int dice[6];
	public:
		Dice(int value[]) { for (int i = 0; i < 6; i++) dice[i] = value[i]; }
		void N();
		void W();
		void S();
		void E();
		void show() { cout << dice[0] << endl; }
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
	string command;
	for (int i = 0; i < 6; i++)
		cin >> value[i];
	cin >> command;
	Dice dice(value);
	int len = strlen(&command[0]);
	for (int i = 0; i < len; i++)
		switch (command[i]) {
			case 'N':
				dice.N();
				break;
			case 'W':
				dice.W();
				break;
			case 'S':
				dice.S();
				break;
			case 'E':
				dice.E();
				break;
		}
	dice.show();
}
