#include<iostream>
using namespace std;

int main(){
  while(true){
    int H, W;
    cin >> H >> W;
    if(H == 0 && W == 0)
      break;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        if(j == 0 || j == W - 1 || i == 0 || i == H - 1){
          cout << '#';
        } else
          cout << '.';
      }
      cout << endl;
    }
    cout << endl;
  }

}
