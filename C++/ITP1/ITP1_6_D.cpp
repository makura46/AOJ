#include<iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int a[n * m] = {0}, b[m] = {0};
  int c[n] = {0};

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> a[i * m + j];
  for(int i = 0; i < m; i++)
    cin >> b[i];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      c[i] += a[i * m + j] * b[j];
    }
  }
  for(int i = 0; i < n; i++)
    cout << c[i] << endl;
}
