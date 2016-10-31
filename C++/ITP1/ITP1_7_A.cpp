#include<iostream>
using namespace std;

int main(){
	int m, f, r;
	while(true){
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1)
			break;
		if(m == -1 || f == -1 || m+f < 30)
			cout << 'F' << endl;
		else if(m+f >= 80)
			cout << "A\n";
		else if(m+f >= 65)
			cout << "B\n";
		else if(m+f >= 50 || m+f >= 30 && r >= 50)
			cout << "C\n";
		else
			cout << "D\n";
	}
}
