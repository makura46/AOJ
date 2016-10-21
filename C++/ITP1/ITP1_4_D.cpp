#include<iostream>
using namespace std;

int main(){
  long sum = 0;
  int max, min, n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    sum += a;
    if(i == 0){
      max = a;
      min = a;
    } else{
      if(max < a)
        max = a;
      if(min > a)
        min = a;
    }
  }
  cout << min << ' ' << max << ' ' << sum << '\n';
}
