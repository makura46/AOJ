#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
	char s[1200];
	cin.getline(s, 1200);
	for(int i = 0; i < strlen(s); i++){
		if(isupper(s[i])){
			s[i] = tolower(s[i]);
		} else if(islower(s[i])){
			s[i] = toupper(s[i]);
		}
	}
	cout << s << endl;
}
