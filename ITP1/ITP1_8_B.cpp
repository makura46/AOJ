#include<iostream>
#include<cstring>
using namespace std;

int main(){
	while(true){
		char x[1001] = {0};
		int sum = 0;
		char p;
		cin >> x;
		if(x[0] == '0')
			break;
		for(int i = 0; i < strlen(x); i++){
			sum += x[i] - '0';
		}
		cout << sum << "\n";
	}
}
