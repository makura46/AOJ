#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int S[13] = {0}, H[13] = {0}, D[13] = {0}, C[13] = {0};
  for(int i = 0; i < n; i++){
    int num;
    char ch;
    cin >> ch >> num;
    if(ch == 'S')
      S[num-1]++;
    else if(ch == 'H')
      H[num-1]++;
    else if(ch == 'C')
      C[num-1]++;
    else
      D[num-1]++;
  }
  for(int i = 0; i < 13; i++){
    if(!S[i])
      cout << "S " << i+1 << endl;
  }
  for(int i = 0; i < 13; i++){
    if(!H[i])
      cout << "H " << i+1 << endl;
  }
  for(int i = 0; i < 13; i++){
    if(!C[i])
      cout << "C " << i+1 << endl;
  }
  for(int i = 0; i < 13; i++){
    if(!D[i])
      cout << "D " << i+1 << endl;
  }
}
