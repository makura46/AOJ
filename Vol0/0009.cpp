#include <iostream>
using namespace std;

#define N 1000000

void isPrime(bool prime[]) {
	for (int i = 2; i <= N; i++)
		if (prime[i])
			for (int j = i * 2; j <= N; j += i)
				prime[j] = false;
}

int main() {
	long n;
	bool prime[1000000+1] = {0};
	for (int i = 2; i <= N; i++)
		prime[i] = true;
	isPrime(prime);
	while (cin >> n) {
		int count = 0;
		for (int i = 2; i <= n; i++)
			if (prime[i])
				count++;
		cout << count << endl;
	}
}
