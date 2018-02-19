#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int pointt = 0, pointh = 0;
	for (int i = 0; i < n; i++) {
		string t, h;
		cin >> t >> h;
		if (t == h) {
			pointt++;
			pointh++;
		} else if (t > h)
			pointt += 3;
		else
			pointh += 3;
	}
	cout << pointt << " " << pointh << endl;
}
