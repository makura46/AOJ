#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int prime) {
	if (prime == 2)
		return true;
	if (!(prime % 2))
		return false;
	for (int i = 3; i <= sqrt(prime); i += 2) {
		if (!(prime % i))
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int prime;
		cin >> prime;
		if (isPrime(prime))
			count++;
	}
	cout << count << endl;
}
