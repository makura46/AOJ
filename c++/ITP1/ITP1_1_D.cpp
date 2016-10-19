#include<iostream>
using namespace std;

int main(){
  int S;
  int h, m, s;
  cin >> S;
  s = S % 60;
  m = S / 60;
  h = m / 60;
  m %= 60;
  cout << h << ':' << m << ':' << s << '\n';

}
