#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x1, x2, x3;
		double y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double x4 = (x1 + x3) / 2;
		double y4 = (y1 + y3) / 2;
		double x5 = (x2 + x3) / 2;
		double y5 = (y2 + y3) / 2;
		if (x4 == x2 && x5 == x1) 
			cout << " KKKK " << endl;
		double m1 = (y4 - y2) / (x4 - x2);
		double m2 = (y1 - y5) / (x1 - x5);
		double _y = 1 - m1 / m2;
		double py = (-y1 + m2 * x1) * (m1 / m2) / _y;
		double px = (py + m1 * x2 - y2) / m1;
		cout << py << " " << px << endl;
	}
}
