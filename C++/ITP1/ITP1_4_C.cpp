#include<iostream>
using namespace std;

int main(){
  int a, b, sum;
  char op;
  while(1){
    cin >> a >> op >> b;
    if(op == '?')
      break;
    if(op == '+'){
      sum = a + b;
    } else if(op == '-'){
      sum = a - b;
    } else if(op == '*'){
      sum = a * b;
    } else if(op == '/'){
      sum = a / b;
    }
    cout << sum << '\n';
  }
}
