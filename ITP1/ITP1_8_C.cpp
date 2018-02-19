#include<iostream>
#include<cctype>
#include<cstring>
#include<stdio.h>
using namespace std;

int main(){
	char s[1201] = {0};
	for(int i = 0; !cin.eof(); i++)
		cin >> s[i];


	for(int i = 0; i < strlen(s); i++)
		s[i] = tolower(s[i]);

	char abc[27];
	int count[26] = {0};

	for(int i = 97, j = 0; i < 123; i++, j++)
		abc[j] = i;
	for(int i = 0; i < strlen(s); i++)
		for(int j = 0; j < 26; j++)
			if(s[i] == abc[j]){
				count[j]++;
				break;
			}
	
	for(int i = 0; i < 26; i++)
		cout << abc[i] << " : " << count[i] << endl;
}

