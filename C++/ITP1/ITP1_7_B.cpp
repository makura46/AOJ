#include<iostream>
using namespace std;

int main(){
	int n, x;
	while(true){
		int sum = 0;
		cin >> n >> x;
		if(n == 0 && x == 0)
			break;
		for(int i = 1; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				for(int k = j+1; k <= n; k++){
					if(i+j+k == x){
						sum++;
					}
				}
			}
		}
		cout << sum << endl;
	}
}

