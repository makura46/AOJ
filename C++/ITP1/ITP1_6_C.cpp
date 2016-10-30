#include<iostream>
using namespace std;

int building, room, storey;

void add(int num, int build[][10]){
  build[storey-1][room-1] += num;
}

void show(int build[][10]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      cout << ' ' << build[i][j];
    }
    cout << endl;
  }
}

int main(){
  int n;
  int building1[3][10] = {0}, building2[3][10] = {0}, building3[3][10] = {0}, building4[3][10] = {0};
  cin >> n;
  for(int i = 0; i < n; i++){
    int num;
    cin >> building >> storey >> room >> num;
    switch(building){
      case 1:
        add(num, building1);
        break;
      case 2:
        add(num, building2);
        break;
      case 3:
        add(num, building3);
        break;
      case 4:
        add(num, building4);
        break;
      defluat:
        break;
    }
  }
  show(building1);
  for(int i = 0; i < 20; i++)
    cout << '#';
  cout << endl;
  show(building2);
  for(int i = 0; i < 20; i++)
    cout << '#';
  cout << endl;
  show(building3);
  for(int i = 0; i < 20; i++)
    cout << '#';
  cout << endl;
  show(building4);
}
