#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<char> q[8];
	q[0].push('s');
	cout << q[0].front() << endl;
}
